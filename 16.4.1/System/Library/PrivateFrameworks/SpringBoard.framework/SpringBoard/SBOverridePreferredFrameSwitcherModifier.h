@class SBDisplayItem;

@interface SBOverridePreferredFrameSwitcherModifier : SBSwitcherModifier

@property (nonatomic) struct CGSize { double width; double height; } newPreferredSize;
@property (nonatomic) struct CGPoint { double x; double y; } newPreferredCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } newPreferredFrame;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (id)initWithDisplayItem:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrameForLayoutRole:(long long)a0 inAppLayout:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 interfaceOrientation:(long long)a3;
- (id)initWithNewPreferredCenter:(struct CGPoint { double x0; double x1; })a0 forDisplayItem:(id)a1;
- (id)initWithNewPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDisplayItem:(id)a1;
- (id)initWithNewPreferredSize:(struct CGSize { double x0; double x1; })a0 forDisplayItem:(id)a1;
- (id)initWithNewPreferredSize:(struct CGSize { double x0; double x1; })a0 newPreferredCenter:(struct CGPoint { double x0; double x1; })a1 forDisplayItem:(id)a2;

@end
