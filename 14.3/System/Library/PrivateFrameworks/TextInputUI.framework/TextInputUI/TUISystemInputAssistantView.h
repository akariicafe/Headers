@class UIView, NSString, UIKBVisualEffectView, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayout, UITextInputAssistantItem, TUISystemInputAssistantPageView, UIKBRenderConfig, TUIAssistantButtonBarView, TUIPredictionView, TUICandidateView;
@protocol TUISystemInputAssistantViewDelegate;

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate> {
    BOOL _buttonBarItemsExpanded;
    BOOL _needsValidation;
    int _needsValidationGuard;
}

@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (readonly, nonatomic) TUICandidateView *candidateView;
@property (retain, nonatomic) UIKBVisualEffectView *backdropView;
@property (retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar;
@property (retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar;
@property (retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar;
@property (retain, nonatomic) TUISystemInputAssistantPageView *centerPageView;
@property (retain, nonatomic) TUISystemInputAssistantLayoutStandard *defaultLayout;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (weak, nonatomic) id<TUISystemInputAssistantViewDelegate> delegate;
@property (retain, nonatomic) TUISystemInputAssistantLayout *layout;
@property (nonatomic) BOOL backgroundVisible;
@property (retain, nonatomic) UIView *centerView;
@property (nonatomic) BOOL centerViewHidden;
@property (nonatomic) double centerViewWidth;
@property (nonatomic) BOOL showsExpandableButtonBarItems;
@property (nonatomic) BOOL hidesExpandableButton;
@property (nonatomic) BOOL showsButtonBarItemsInline;
@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (retain, nonatomic) UITextInputAssistantItem *systemInputAssistantItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assistantPageView:(id)a0 didSwitchToSecondaryViewVisible:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_swiftPlaygroundsWorkaroundEnabled;
- (void)setNeedsValidation;
- (BOOL)shouldSkipValidation;
- (void)_setRenderConfig:(id)a0;
- (void)_updateBarButtonGroups;
- (BOOL)_shouldHostCenterViewOutsidePageView;
- (void)_exchangeCenterViewIfNecessaryForCompatibility;
- (void)assistantButtonBarView:(id)a0 wantsToShowCollapsedItemGroup:(id)a1 fromButton:(id)a2;
- (void)_updateExpandableButtonBarItems;
- (void)_updateVisualProvider;
- (void)layoutSubviews;
- (void)_didTapExpandButton:(id)a0;
- (id)_createUnifiedButtonBarIfNecessary;
- (BOOL)_areButtonBarItemsVisible;
- (id)_currentLayoutViewSet;
- (id)_hostedCenterView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setButtonBarItemsExpanded:(BOOL)a0 animationType:(unsigned long long)a1;
- (void)validateIfNeeded;
- (void)setButtonBarItemsExpanded:(BOOL)a0 animated:(BOOL)a1;

@end
