@interface SBSetupPIPMorphingSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } appLayoutBoundingBox;

- (long long)type;

@end
