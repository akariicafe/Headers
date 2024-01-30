@class NSArray, UIResponder, _UIMenuBuilder, UIMenu;

@interface _UIMainMenuSystem : UIMenuSystem {
    _UIMenuBuilder *_automaticallyRebuildingBuilder;
    UIResponder *_initialBuildingResponderOverride;
}

@property (class, readonly, nonatomic) _UIMainMenuSystem *_sharedSystem;

@property (readonly, nonatomic) NSArray *_keyCommands;
@property (readonly, nonatomic) UIMenu *_rootMenu;

- (id)_init;
- (void)dealloc;
- (void)setNeedsRebuild;
- (void).cxx_destruct;
- (void)_automaticallyRebuildIfNeeded;
- (BOOL)_buildMenuWithBuilder:(id)a0 fromResponderChain:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 inCoordinateSpace:(id)a3;
- (void)_setInitialBuildingResponder:(id)a0;

@end
