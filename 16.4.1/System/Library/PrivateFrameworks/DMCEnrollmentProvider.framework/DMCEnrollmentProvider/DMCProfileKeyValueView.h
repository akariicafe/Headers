@class UILabel, UIImageView;

@interface DMCProfileKeyValueView : UIView

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *verifiedImageView;
@property (retain, nonatomic) UILabel *verifiedLabel;
@property (nonatomic) double preferredValueLabelOriginX;

+ (double)defaultPreferredValueLabelOriginX;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setKey:(id)a0 value:(id)a1;
- (void)setItemDetail:(id)a0;
- (id)_captionFontBold:(BOOL)a0;
- (double)desiredValueLabelOriginXForSize:(struct CGSize { double x0; double x1; })a0;

@end
