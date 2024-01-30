@class WFGlyphView;

@interface WFGlyphPickerCell : UICollectionViewCell

@property (weak, nonatomic) WFGlyphView *glyphView;
@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic) BOOL outline;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(BOOL)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
