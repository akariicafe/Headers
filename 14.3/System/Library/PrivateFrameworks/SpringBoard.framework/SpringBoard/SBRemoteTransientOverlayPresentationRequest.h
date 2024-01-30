@class SBTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying>

@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (nonatomic) BOOL isScreenshotMarkup;
@property (nonatomic) BOOL shouldDismissSiri;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewController:(id)a0;

@end
