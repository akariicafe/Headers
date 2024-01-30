@class _UINavigationBarTransitionContext, NSString, NSArray, NSDictionary, _UIPointerInteractionAssistant, UIView, _UINavigationBarLargeTitleViewLayout;

@interface _UINavigationBarLargeTitleView : UIView <UIPointerInteractionDelegate, _UINavigationBarTransitionContextParticipant> {
    _UINavigationBarTransitionContext *_transitionContext;
    NSArray *_titleCandidates;
    NSString *__effectiveTitle;
}

@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant;
@property (nonatomic) long long titleType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *alternateTitles;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (readonly, nonatomic) NSDictionary *effectiveTitleAttributes;
@property (nonatomic) unsigned long long twoLineMode;
@property (nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights;
@property (readonly, nonatomic) double restingHeightOfTitleView;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL alignAccessoryViewToTitleBaseline;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (readonly, nonatomic) UIView *accessibilityTitleView;
@property (readonly, nonatomic) _UINavigationBarLargeTitleViewLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordToStateForTransition:(id)a0;
- (id)_newLayout;
- (void)adoptLayout:(id)a0;
- (void)clearTransitionContext;
- (void)prepareToRecordToState:(id)a0;
- (void)adoptNewLayout;
- (void)recordFromStateForTransition:(id)a0;
- (void)finalizeStateFromTransition:(id)a0;
- (void)ensureBackButtonTruncationOccursWithContext:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_clearAssistants;
- (void)_setAssistants;
- (id)_titleForCurrentWidth;
- (void)_updateContentAndInvalidate:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 titleType:(long long)a1;
- (id)_effectiveTitle;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (id)_layoutForMeasurement;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
