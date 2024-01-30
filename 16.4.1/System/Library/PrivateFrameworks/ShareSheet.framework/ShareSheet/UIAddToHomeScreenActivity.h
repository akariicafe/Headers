@class UIViewController;

@interface UIAddToHomeScreenActivity : UIActivity {
    UIViewController *_addToHomeScreenViewController;
}

+ (unsigned long long)_xpcAttributes;

- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;

@end
