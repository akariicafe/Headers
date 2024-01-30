@class NSString;

@interface SBTitledHomeScreenButton : SBHomeScreenButton <UIPointerInteractionDelegate>

@property (nonatomic) long long type;
@property (nonatomic) struct SBTitledHomeScreenButtonMetrics { double minimumButtonWidth; double minimumButtonHeight; double minimumHorizontalPadding; double baselineToTop; double preferredTitlePointSize; double minimumTitlePointSize; } metrics;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentFittingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)defaultContentImage;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundView:(id)a1 type:(long long)a2 content:(id)a3;
- (id)contentImageWithTitle:(id)a0;

@end
