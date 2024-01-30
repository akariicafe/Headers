@class NSString, UIImage, CNAvatarView, UIImageView, CNContact, UIButton, UILabel, UIColor;

@interface PKDashboardMessageCell : UITableViewCell {
    UIImageView *_iconImageView;
    CNAvatarView *_avatarView;
    UIButton *_dismissButton;
    BOOL _isTemplateLayout;
}

@property (nonatomic) BOOL smallDevice;
@property (nonatomic) double leftContentInset;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) UILabel *labelTitle;
@property (readonly, nonatomic) UILabel *labelSecondaryTitle;
@property (readonly, nonatomic) UILabel *labelMessage;
@property (readonly, nonatomic) UILabel *labelSecondaryMessage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *secondaryMessage;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *iconImageTintColor;
@property (retain, nonatomic) UIImage *dismissImage;
@property (retain, nonatomic) CNContact *avatarContact;
@property (copy, nonatomic) id /* block */ actionOnDismiss;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateAvatarView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissButtonPressed:(id)a0;

@end
