@class UILayoutGuide;

@interface CKDetailsAddMemberLargeTextCell : CKDetailsAddMemberCell

@property (retain, nonatomic) UILayoutGuide *leadingGuide;

+ (double)preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_initConstraints;
- (void)_initLabel;

@end
