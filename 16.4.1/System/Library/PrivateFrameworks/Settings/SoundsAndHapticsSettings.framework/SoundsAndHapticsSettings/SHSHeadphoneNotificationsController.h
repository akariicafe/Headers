@class NSString, UIScrollView, UILabel, UIView;

@interface SHSHeadphoneNotificationsController : UIViewController <UITextViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionText;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)titleText;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)createTitleLabel;
- (id)createScrollView;
- (id)bluetoothSettingsLinkText;
- (id)createDescriptionLabel;
- (id)healthLinkText;
- (id)linkText:(id)a0 withLink:(id)a1;

@end
