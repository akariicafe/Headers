@class UILabel, NSArray, CKDetailsAvatarPancakeView;

@interface CKDetailsGroupHeaderCell : CKDetailsShowMoreContactsCell

@property (retain, nonatomic) CKDetailsAvatarPancakeView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) NSArray *avatarViews;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)addConstraints;
- (void)configureCellIconForCollapsedState:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 participants:(id)a2;

@end
