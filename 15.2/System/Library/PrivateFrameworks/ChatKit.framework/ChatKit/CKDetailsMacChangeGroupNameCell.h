@class UIImageView, UILabel;

@interface CKDetailsMacChangeGroupNameCell : CKDetailsCell

@property (retain, nonatomic) UIImageView *cellGlpyh;
@property (retain, nonatomic) UILabel *changeNameLabel;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
