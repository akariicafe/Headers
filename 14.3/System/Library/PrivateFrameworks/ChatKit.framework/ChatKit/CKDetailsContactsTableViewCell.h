@class UIActivityIndicatorView, NSString, CNContact, CKLabel, UILabel, CKAvatarView, UIButton;
@protocol CKDetailsContactsTableViewCellDelegate;

@interface CKDetailsContactsTableViewCell : CKDetailsCell

@property (retain, nonatomic) CKLabel *nameLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) CKAvatarView *contactAvatarView;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) BOOL showsLocation;
@property (nonatomic) BOOL showMessageButton;
@property (nonatomic) BOOL showPhoneButton;
@property (nonatomic) BOOL showFaceTimeVideoButton;
@property (nonatomic) BOOL showInfoButton;
@property (nonatomic) BOOL showScreenSharingButton;
@property (retain, nonatomic) UIButton *messageButton;
@property (retain, nonatomic) UIButton *phoneButton;
@property (retain, nonatomic) UIButton *facetimeVideoButton;
@property (retain, nonatomic) UIButton *screenSharingButton;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIActivityIndicatorView *updatingParticipantSpinner;
@property (weak, nonatomic) id<CKDetailsContactsTableViewCellDelegate> delegate;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (double)estimatedHeight;
+ (double)marginWidth;
+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_ckSymbolImageNamed:(id)a0 preferredContentSizeCategory:(id)a1 preferredFontTextStyle:(id)a2;
- (void).cxx_destruct;
- (void)_configureButtonLayer:(id)a0;
- (void)_handleCommunicationAction:(id)a0;
- (void)_showUpdatingParticipantSpinner;
- (void)_dismissUpdatingParticipantSpinner;
- (void)configureWithViewModel:(id)a0;
- (void)_updateVisibleButtons;
- (void)_hideAllButtons;
- (id)_imageNamed:(id)a0;
- (void)layoutSubviews;
- (void)didHoverOverCell:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
