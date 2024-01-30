@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton

@property (retain, nonatomic) NSDictionary *tabBarItem;

- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateSelectionViewForState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_configureSubviews;
- (void)_setSelectedOrHighlighted:(BOOL)a0;
- (void)_updateImageEdgeInsets;

@end
