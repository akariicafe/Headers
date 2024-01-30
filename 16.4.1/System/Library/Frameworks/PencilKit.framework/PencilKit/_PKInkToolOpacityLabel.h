@class UILabel;

@interface _PKInkToolOpacityLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) double inkOpacity;

+ (id)_fontForSizeState:(unsigned long long)a0;
+ (id)_formattedStringForInkOpacity:(double)a0;
+ (double)_labelAlphaForInkOpacity:(double)a0;
+ (double)_labelOffsetFromBottomEdgeForSizeState:(unsigned long long)a0;
+ (double)_maxLabelHeightForSizeState:(unsigned long long)a0;
+ (BOOL)_shouldHideLabel:(double)a0;
+ (double)_toolOffsetForSizeState:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForRotatedLabel;
- (id)_inkOpacityLabelString;
- (void)setInkOpacity:(double)a0 animated:(BOOL)a1;

@end
