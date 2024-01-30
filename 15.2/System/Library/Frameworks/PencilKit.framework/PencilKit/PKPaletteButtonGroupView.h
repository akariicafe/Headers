@class NSArray, NSString, UIStackView;

@interface PKPaletteButtonGroupView : UIView <PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL useEqualInterItemSpacing;
@property (nonatomic) double scalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAllButtons;
- (void)addButton:(id)a0;
- (void).cxx_destruct;
- (void)_updateContentScalingFactor;
- (long long)_buttonStackViewDistribution;
- (double)_buttonStackViewSpacing;
- (void)addButtonsFromArray:(id)a0;

@end
