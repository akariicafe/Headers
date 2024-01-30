@class SBSwitcherShelf;

@interface SBShelfIconBounceTransitionModifier : SBTransitionSwitcherModifier {
    SBSwitcherShelf *_shelf;
}

- (id)keyboardSuppressionMode;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounceIconInitialFrame;
- (id)bounceIconBundleIdentifier;
- (unsigned long long)bounceIconGenerationCountForCurrentCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 shelf:(id)a1;

@end
