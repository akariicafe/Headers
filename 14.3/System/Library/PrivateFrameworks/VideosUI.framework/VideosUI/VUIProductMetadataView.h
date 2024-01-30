@class VUIProductInfoAiringView, NSArray, IKViewElement, UIView, VUIProductMetadataLayout, VUISeparatorView;

@interface VUIProductMetadataView : UIView

@property (retain, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) VUIProductMetadataLayout *viewLayout;
@property (retain, nonatomic) UIView *defaultFocusView;
@property (retain, nonatomic) VUIProductInfoAiringView *airingView;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) IKViewElement *viewElement;

+ (id)configureViewWithElement:(id)a0 existingView:(id)a1;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_generateSectionViewFromElement:(id)a0;
- (void)updateViewWithSections:(id)a0;

@end
