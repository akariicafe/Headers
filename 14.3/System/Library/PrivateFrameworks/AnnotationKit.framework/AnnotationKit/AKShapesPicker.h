@class NSArray;

@interface AKShapesPicker : AKModernToolbarPicker

@property (copy, nonatomic) NSArray *shapes;
@property long long style;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_shapeButtonPressed:(id)a0;
- (void)_updateCurrentAppearanceIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shapeTags:(id)a1;

@end
