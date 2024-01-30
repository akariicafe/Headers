@class NSString, UIViewController;

@interface CKAvatarView : CNAvatarView

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) NSString *preferredHandle;
@property (retain, nonatomic, setter=_ck_setContextToken:) NSString *_ck_contextToken;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
