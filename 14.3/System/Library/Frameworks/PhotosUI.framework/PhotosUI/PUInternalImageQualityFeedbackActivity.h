@class NSString;

@interface PUInternalImageQualityFeedbackActivity : PXActivity <PXFeedbackImageQualityUIViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityViewController;
- (id)assets;
- (void)feedbackImageQualityUIViewController:(id)a0 didFinish:(BOOL)a1;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;

@end
