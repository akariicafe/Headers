@class UIColor, _UIBackdropView;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {
    _UIBackdropView *_blurView;
}

@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double blurRadius;
@property (nonatomic) BOOL blursSelf;

+ (id)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* block */)a0;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;
- (void)_createAndAddBlurViewIfNecessary;
- (void)dismiss;

@end
