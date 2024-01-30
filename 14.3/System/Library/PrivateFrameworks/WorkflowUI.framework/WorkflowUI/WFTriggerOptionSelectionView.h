@class UIImageView, WFCircularGlyphView, UILabel;

@interface WFTriggerOptionSelectionView : UIView

@property (readonly, nonatomic) WFCircularGlyphView *selectedView;
@property (readonly, nonatomic) WFCircularGlyphView *unselectedView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

+ (double)scaledValueForValue:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateAlpha;

@end
