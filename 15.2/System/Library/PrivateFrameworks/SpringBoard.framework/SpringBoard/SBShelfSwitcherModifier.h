@class SBSwitcherShelf, SBAppLayout;

@interface SBShelfSwitcherModifier : SBSwitcherModifier {
    long long _layoutRole;
    SBAppLayout *_activeFullScreenAppLayout;
    SBAppLayout *_activeFloatingAppLayout;
    unsigned long long _contentOptions;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _presentationTargetFrame;
    SBAppLayout *_presentedFromAppLayout;
    unsigned long long _animationStyle;
    BOOL _isPendingDismissal;
    BOOL _isPendingDismissalFromGesture;
}

@property (readonly, nonatomic) SBSwitcherShelf *shelf;

+ (unsigned long long)contentOptionsForTransitionEvent:(id)a0 context:(id)a1;

- (id)containerLeafAppLayoutForShelf:(id)a0;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShelf:(id)a0;
- (id)visibleShelves;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (id)focusedAppLayoutForShelf:(id)a0;
- (void).cxx_destruct;
- (id)ignoredDisplayItemsForShelf:(id)a0;
- (struct SBSwitcherShelfPresentationAttributes { BOOL x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned long long x2; unsigned long long x3; })presentationAttributesForShelf:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithShelf:(id)a0 contentOptions:(unsigned long long)a1 activeFullScreenAppLayout:(id)a2 activeFloatingAppLayout:(id)a3 presentationTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 presentedFromAppLayout:(id)a5;
- (id)_responseForDismissingIfNeededGestureInitiated:(BOOL)a0;

@end
