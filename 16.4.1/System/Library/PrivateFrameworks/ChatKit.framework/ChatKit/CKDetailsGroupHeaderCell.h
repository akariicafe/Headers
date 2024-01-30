@class UILabel, NSArray, CKDetailsAvatarPancakeView;

@interface CKDetailsGroupHeaderCell : CKDetailsShowMoreContactsCell

@property (retain, nonatomic) CKDetailsAvatarPancakeView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) NSArray *avatarViews;

+ (id)reuseIdentifier;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)addConstraints;
- (void)configureCellIconForCollapsedState:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 participants:(id)a2;

@end
