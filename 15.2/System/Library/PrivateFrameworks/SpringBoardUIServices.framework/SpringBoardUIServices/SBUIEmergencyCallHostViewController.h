@class UIColor, _UIBackdropView;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {
    _UIBackdropView *_blurView;
}

@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double blurRadius;
@property (nonatomic) BOOL blursSelf;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* block */)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;
- (void)_createAndAddBlurViewIfNecessary;

@end
