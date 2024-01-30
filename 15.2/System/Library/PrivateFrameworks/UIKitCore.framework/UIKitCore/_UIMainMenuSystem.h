@class NSArray, _UIMenuBuilder, UIMenu;

@interface _UIMainMenuSystem : UIMenuSystem {
    _UIMenuBuilder *_automaticallyRebuildingBuilder;
}

@property (class, readonly, nonatomic) _UIMainMenuSystem *_sharedSystem;

@property (readonly, nonatomic) NSArray *_keyCommands;
@property (readonly, nonatomic) UIMenu *_rootMenu;

- (void).cxx_destruct;
- (id)_init;
- (void)_automaticallyRebuildIfNeeded;
- (void)dealloc;
- (void)setNeedsRebuild;
- (BOOL)_buildMenuWithBuilder:(id)a0 fromResponderChain:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 inCoordinateSpace:(id)a3;

@end
