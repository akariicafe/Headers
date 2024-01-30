@class NSArray;

@interface SBPrepareForSceneUpdateSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSArray *liveAppLayouts;

- (long long)type;
- (void).cxx_destruct;
- (id)initWithLiveAppLayouts:(id)a0;

@end
