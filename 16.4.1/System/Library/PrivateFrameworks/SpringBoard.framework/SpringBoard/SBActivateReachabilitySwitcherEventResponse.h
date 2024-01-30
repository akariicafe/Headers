@interface SBActivateReachabilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) struct SBReachabilityActivationContext { struct CGPoint { double x; double y; } location; struct CGPoint { double x; double y; } translation; struct CGPoint { double x; double y; } velocity; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBounds; BOOL everTranslatedUpwards; } reachabilityActivationContext;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithReachabilityContext:(struct SBReachabilityActivationContext { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; BOOL x4; })a0;

@end
