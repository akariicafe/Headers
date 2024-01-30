@class NSAttributedString, CNContact, NSArray, NSString, UILabel, NSMutableArray, CNAvatarView;

@interface HUContactView : UIView

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *appleIDAccountLabel;
@property (retain, nonatomic) UILabel *appleMusicAccountLabel;
@property (nonatomic) double avatarDiameter;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) long long contactNameFormatStyle;
@property (retain, nonatomic) NSAttributedString *message;
@property (nonatomic) unsigned long long numberOfLinesForMessage;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSString *contactNameFontTextStyle;

- (void)_updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (BOOL)_isPhoneNumberOnlyAccount;
- (void)_updateNameLabelFont;

@end
