@class NSString;

@interface PUInternalAutoLoopFeedbackActivity : PXActivity <PXFeedbackAssetUIViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityViewController;
- (id)asset;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)feedbackAssetUIViewController:(id)a0 didFinish:(BOOL)a1;

@end
