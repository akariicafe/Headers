@class NSArray;

@interface _TVOrganizerCellView : UIView

@property (readonly, copy, nonatomic) NSArray *filteredComponents;
@property (copy, nonatomic) NSArray *components;
@property (nonatomic) long long contentVerticalAlignment;

- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setComponentsNeedUpdate;
- (void)_resetSubviews;
- (void)_verticallyStackComponents:(id)a0 alignment:(long long)a1;
- (struct CGSize { double x0; double x1; })_sizeThatFitsComponents:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateView:(id)a0 maxViewWidth:(double)a1;
- (long long)_alignmentFromView:(id)a0;

@end
