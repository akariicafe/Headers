@class NSString;
@protocol SXComponentActionHandler, SXTextSourceFactory;

@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory>

@property (readonly, nonatomic) id<SXTextSourceFactory> textSourceFactory;
@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createCaptionView;
- (id)initWithTextSourceFactory:(id)a0 actionHandler:(id)a1;

@end
