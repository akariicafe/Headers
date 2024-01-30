@class NSString, UIScrollView, UILabel, UIView;

@interface SHSHeadphoneNotificationsController : UIViewController <UITextViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)descriptionText;
- (id)titleText;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)createTitleLabel;
- (id)createScrollView;
- (id)createDescriptionLabel;
- (id)linkText:(id)a0 withLink:(id)a1;
- (id)bluetoothSettingsLinkText;
- (id)healthLinkText;

@end
