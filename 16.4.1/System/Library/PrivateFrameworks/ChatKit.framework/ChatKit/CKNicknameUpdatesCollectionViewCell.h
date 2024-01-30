@class UIView, CKAvatarView, NSString, UIImageView, UIButton, NSLayoutConstraint, CKNicknameUpdate, UILabel;
@protocol CKNicknameUpdatesCollectionViewCellDelegate;

@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell <CKNicknameUpdateInterface>

@property (class, nonatomic) BOOL usesStackedButtonLayout;
@property (class, nonatomic) BOOL recalculateUsesStackedButtonLayout;

@property (weak, nonatomic) id<CKNicknameUpdatesCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *updateButton;
@property (retain, nonatomic) UIButton *ignoreButton;
@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) NSLayoutConstraint *bottomSeparatorLeadingConstraint;
@property (nonatomic) BOOL needsContextualMenu;
@property (retain, nonatomic) CKNicknameUpdate *nicknameUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_ignoreButtonTapped:(id)a0;
- (void)_updateButtonTapped:(id)a0;
- (void)configureWithNicknameUpdate:(id)a0 order:(unsigned long long)a1;
- (void)updateInterfaceSelectedAction:(unsigned long long)a0;
- (void)updateSeparatorsForOrder:(unsigned long long)a0;

@end
