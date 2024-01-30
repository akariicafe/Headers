@class _UIMenuBuilder;

@interface UIMenuSystem : NSObject {
    _UIMenuBuilder *_defaultBuilder;
}

@property (class, readonly, nonatomic) UIMenuSystem *mainSystem;
@property (class, readonly, nonatomic) UIMenuSystem *contextSystem;

- (id)_newBuilderFromResponderChain:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (id)initWithRootMenuChildren:(id)a0;
- (void).cxx_destruct;
- (void)setNeedsRevalidate;
- (void)setNeedsRebuild;
- (BOOL)_buildMenuWithBuilder:(id)a0 fromResponderChain:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 inCoordinateSpace:(id)a3;

@end
