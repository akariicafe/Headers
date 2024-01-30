@class NSArray, NSString, UIView;

@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable>

@property (retain, nonatomic) NSArray *viewsAboveInfoSection;
@property (retain, nonatomic) NSArray *infoSectionViews;
@property (retain, nonatomic) NSArray *viewsBelowInfoSection;
@property (retain, nonatomic) UIView *defaultFocusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productInfoViewWithElement:(id)a0 existingView:(id)a1;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)a0;

@end
