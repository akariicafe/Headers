@class UIColor, _UIBackdropView;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {
    _UIBackdropView *_blurView;
}

@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double blurRadius;
@property (nonatomic) BOOL blursSelf;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* block */)a0;

- (void)dismiss;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_createAndAddBlurViewIfNecessary;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;

@end
