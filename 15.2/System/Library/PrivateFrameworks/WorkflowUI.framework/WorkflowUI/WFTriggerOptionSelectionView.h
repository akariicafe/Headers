@class UIImageView, WFCircularGlyphView, UILabel;

@interface WFTriggerOptionSelectionView : UIView

@property (readonly, nonatomic) WFCircularGlyphView *selectedView;
@property (readonly, nonatomic) WFCircularGlyphView *unselectedView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

+ (double)scaledValueForValue:(double)a0;

- (void).cxx_destruct;
- (id)init;
- (void)updateAlpha;

@end
