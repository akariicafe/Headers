@class SBDisplayItem;

@interface SBPulseDisplayItemSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *displayItemToPulse;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTimerEvent:(id)a0;
- (id)initWithDisplayItem:(id)a0;
- (void).cxx_destruct;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleTapAppLayoutHeaderEvent:(id)a0;

@end
