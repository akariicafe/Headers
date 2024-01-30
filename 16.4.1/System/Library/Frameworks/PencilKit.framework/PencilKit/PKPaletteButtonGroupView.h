@class UIStackView, NSArray, NSString, NSLayoutConstraint;

@interface PKPaletteButtonGroupView : UIView <PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSLayoutConstraint *buttonStackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonStackViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonStackViewTrailingConstraint;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL useEqualInterItemSpacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } additionalContentMargins;
@property (nonatomic) double scalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)removeAllButtons;
- (void)addButtonsFromArray:(id)a0;

@end
