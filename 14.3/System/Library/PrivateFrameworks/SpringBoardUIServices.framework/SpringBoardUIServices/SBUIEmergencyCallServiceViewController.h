@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>

@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) UIColor *tintColor;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)backgroundStyle:(id /* block */)a0;
- (void)noteTintColorForBackgroundStyleChanged:(id)a0;
- (void)noteViewMovedOffscreenTemporarily;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
