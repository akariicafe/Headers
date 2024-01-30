@class UIInterfaceActionGroup, NSString, WFCompactTitledPlatterView, UIInterfaceActionGroupView, UILabel, UIView, WFImage;
@protocol WFCompactPlatterContentClippingDelegate, WFCompactPlatterSizingDelegate;

@interface WFCompactPlatterView : UIView <WFCompactTitledPlatterViewDelegate, UIInterfaceActionHandlerInvocationDelegate, MTVisualStylingProviding>

@property (weak, nonatomic) WFCompactTitledPlatterView *platterView;
@property (weak, nonatomic) UILabel *primaryLabel;
@property (weak, nonatomic) UILabel *secondaryLabel;
@property (weak, nonatomic) UIView *contentViewSeparatorView;
@property (weak, nonatomic) UIView *clippingContentView;
@property (weak, nonatomic) UIView *clippingAutoLayoutContainerView;
@property (weak, nonatomic) UIView *footerViewSeparatorView;
@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView;
@property (nonatomic) BOOL hasScheduledSizeInvalidation;
@property (readonly, nonatomic) UIView *contentViewContainerView;
@property (copy, nonatomic) NSString *attributionTitle;
@property (copy, nonatomic) WFImage *attributionIcon;
@property (copy, nonatomic) NSString *primaryText;
@property (nonatomic) long long primaryTextAlignment;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIInterfaceActionGroup *actionGroup;
@property (nonatomic) BOOL arrangeActionsVertically;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL hidesContentViewTopSeparator;
@property (nonatomic, getter=isClippingContent) BOOL clippingContent;
@property (nonatomic) double contentHeightWhenClipped;
@property (nonatomic) double contentVerticalOffsetWhenClipped;
@property (weak, nonatomic) id<WFCompactPlatterContentClippingDelegate> contentClippingDelegate;
@property (readonly, nonatomic) UIView *footerView;
@property (nonatomic) double footerViewHeight;
@property (nonatomic) BOOL footerViewHidden;
@property (weak, nonatomic) id<WFCompactPlatterSizingDelegate> sizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)separatorHeight;
- (void)interfaceAction:(id)a0 invokeActionHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)allowedActionLayoutAxisByPriority;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutCustomContentViewForPlatterView:(id)a0;
- (struct CGSize { double x0; double x1; })staticContentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsLayoutAndSizeInvalidation;
- (void)layoutContentInsideClippingView;
- (void)_labelContentChanged;
- (void)updateContentViewSeparatorVisibility;

@end
