@class SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot, SBSwitcherModifierEventResponseSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject

@property (retain, nonatomic) SBSwitcherModifierEventSnapshot *eventSnapshot;
@property (retain, nonatomic) SBSwitcherModifierStackSnapshot *postEventStackSnapshot;
@property (retain, nonatomic) SBSwitcherModifierEventResponseSnapshot *responseSnapshot;

- (void).cxx_destruct;

@end
