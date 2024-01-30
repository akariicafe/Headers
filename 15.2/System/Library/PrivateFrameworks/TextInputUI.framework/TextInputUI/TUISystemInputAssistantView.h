@class UIView, NSString, UIKBVisualEffectView, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayout, UITextInputAssistantItem, TUISystemInputAssistantPageView, UIKBRenderConfig, TUIAssistantButtonBarView, TUIPredictionView, TUICandidateView;
@protocol _UIButtonBarAppearanceDelegate, TUISystemInputAssistantStyle, TUISystemInputAssistantViewDelegate;

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate> {
    BOOL _buttonBarItemsExpanded;
    BOOL _needsValidation;
    int _needsValidationGuard;
}

@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (readonly, nonatomic) TUICandidateView *candidateView;
@property (retain, nonatomic) UIKBVisualEffectView *backdropView;
@property (retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar;
@property (retain, nonatomic) TUISystemInputAssistantPageView *centerPageView;
@property (retain, nonatomic) TUISystemInputAssistantLayoutStandard *defaultLayout;
@property (retain, nonatomic) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar;
@property (retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar;
@property (weak, nonatomic) id<TUISystemInputAssistantViewDelegate> delegate;
@property (retain, nonatomic) TUISystemInputAssistantLayout *layout;
@property (retain, nonatomic) id<TUISystemInputAssistantStyle> style;
@property (nonatomic) BOOL backgroundVisible;
@property (retain, nonatomic) UIView *centerView;
@property (nonatomic) BOOL centerViewHidden;
@property (readonly, nonatomic) BOOL showsCenterView;
@property (nonatomic) double centerViewWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) BOOL showsExpandableButtonBarItems;
@property (nonatomic) BOOL hidesExpandableButton;
@property (nonatomic) BOOL showsButtonBarItemsInline;
@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (readonly, nonatomic) BOOL isInputAssistantItemHidden;
@property (retain, nonatomic) UITextInputAssistantItem *systemInputAssistantItem;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsValidation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (void)assistantButtonBarView:(id)a0 wantsToShowCollapsedItemGroup:(id)a1 fromButton:(id)a2;
- (void)_setRenderConfig:(id)a0;
- (void)layoutSubviews;
- (void)_setButtonBarItemsExpanded:(BOOL)a0 animationType:(unsigned long long)a1;
- (void)_updateStyle;
- (void)_exchangeCenterViewIfNecessaryForCompatibility;
- (id)_currentLayoutViewSet;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)validateIfNeeded;
- (BOOL)_swiftPlaygroundsWorkaroundEnabled;
- (void)_updateExpandableButtonBarItems;
- (void)_updateBarButtonGroups;
- (void)assistantPageView:(id)a0 didSwitchToSecondaryViewVisible:(BOOL)a1;
- (void)_didTapExpandButton:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldSkipValidation;
- (id)_createUnifiedButtonBarIfNecessary;
- (void)setButtonBarItemsExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateVisualProvider;
- (void)_updateBarButtonGroupsIfNeeded;
- (void)transitionToLayout:(id)a0 withStyle:(id)a1 start:(id /* block */)a2;
- (id)_hostedCenterView;
- (BOOL)_areButtonBarItemsVisible;
- (BOOL)_shouldHostCenterViewOutsidePageView;

@end
