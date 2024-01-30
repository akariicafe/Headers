@class UIImageView;

@interface CKDetailsAddMemberStandardCell : CKDetailsAddMemberCell

@property (retain, nonatomic) UIImageView *addIcon;

+ (double)preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
