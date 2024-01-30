@class NSArray, IKViewElement, NSString, UIView;

@interface _TVProductStackView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView *_lastFocusedView;
}

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) NSArray *viewsAboveDescription;
@property (retain, nonatomic) UIView *descriptionView;
@property (retain, nonatomic) NSArray *viewsBelowDescription;
@property (retain, nonatomic) UIView *buttonsRowView;
@property (retain, nonatomic) UIView *initialFocusView;
@property (retain, nonatomic) IKViewElement *stackElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productStackViewWithElement:(id)a0 existingView:(id)a1;

- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)a0;

@end
