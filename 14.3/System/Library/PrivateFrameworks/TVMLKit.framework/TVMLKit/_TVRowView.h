@class NSArray, NSString, UIView;

@interface _TVRowView : _TVFocusRedirectView <TVAppTemplateImpressionable>

@property (readonly, copy, nonatomic) NSArray *leftComponents;
@property (readonly, copy, nonatomic) NSArray *centerComponents;
@property (readonly, copy, nonatomic) NSArray *rightComponents;
@property (readonly, copy, nonatomic) NSArray *allComponents;
@property (readonly, weak, nonatomic) UIView *lastFocusedView;
@property (copy, nonatomic) NSArray *components;
@property (weak, nonatomic) UIView *preferredFocusedComponent;
@property (nonatomic) long long contentVerticalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftAlignedFrameForComponent:(id)a0 previousComponent:(id)a1 interitemSpacing:(double)a2;
+ (void)_alignComponents:(id)a0 withLineSize:(struct CGSize { double x0; double x1; })a1 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 originYBump:(double)a3 verticalAlignment:(long long)a4 horizontalAlignment:(long long)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectForComponents:(id)a0 interitemSpacing:(double)a1 boundingSize:(struct CGSize { double x0; double x1; })a2 horizontalAlignment:(long long)a3 allowsOverflow:(BOOL)a4;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)_resetSubviews;
- (struct CGSize { double x0; double x1; })_sizeThatFitsComponents:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (long long)_alignmentFromView:(id)a0;
- (void)_addSubview:(id)a0 maxViewWidth:(double)a1;
- (void)_lineUpComponents:(id)a0 alignment:(long long)a1 attribute:(long long)a2;

@end
