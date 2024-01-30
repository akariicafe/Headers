@class NSString, SKOverlayConfiguration;
@protocol SKOverlayDelegate, ASOOverlayConfiguration, ASOOverlayDelegate;

@interface SKOverlay : NSObject <ASOOverlay, ASOOverlayDelegate>

@property (weak, nonatomic) id<SKOverlayDelegate> delegate;
@property (readonly, copy) SKOverlayConfiguration *configuration;
@property (readonly, weak, nonatomic) id<ASOOverlayDelegate> overlayDelegate;
@property (readonly, copy) id<ASOOverlayConfiguration> overlayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dismissOverlayInScene:(id)a0;
+ (id)unsupportedPlatformErrorWithAPIName:(id)a0;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)presentInScene:(id)a0;
- (BOOL)isReadyToPresentInScene:(id)a0;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (void)storeOverlay:(id)a0 willStartDismissal:(id)a1;
- (void)storeOverlay:(id)a0 willStartPresentation:(id)a1;
- (id)tranformToPublicError:(id)a0;

@end
