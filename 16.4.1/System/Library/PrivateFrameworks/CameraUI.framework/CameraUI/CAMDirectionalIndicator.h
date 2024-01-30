@class NSString, CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl <CAMAccessibilityHUDItemProvider>

@property (readonly, nonatomic) CAShapeLayer *_arrowLayer;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_circleSize;
+ (id)_createCircleImage;

- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateArrowColorAnimated:(BOOL)a0;
- (void)_updateArrowLineWidth;
- (void)_updateArrowShapeAnimated:(BOOL)a0;
- (void)setDirection:(long long)a0 animated:(BOOL)a1;

@end
