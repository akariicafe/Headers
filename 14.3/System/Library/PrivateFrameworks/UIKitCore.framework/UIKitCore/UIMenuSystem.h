@class NSArray, _UIMenuBuilder, UIMenu;

@interface UIMenuSystem : NSObject {
    _UIMenuBuilder *_defaultBuilder;
    _UIMenuBuilder *_automaticallyRebuildingBuilder;
    id /* block */ _adaptBuilderToResponderPre;
    id /* block */ _adaptBuilderToResponderPost;
}

@property (class, readonly, nonatomic) UIMenuSystem *mainSystem;
@property (class, readonly, nonatomic) UIMenuSystem *contextSystem;

@property (readonly, nonatomic) BOOL shouldAutomaticallyRebuild;
@property (readonly, nonatomic) NSArray *_keyCommands;
@property (readonly, nonatomic) UIMenu *_rootMenu;

- (void)setNeedsRebuild;
- (void).cxx_destruct;
- (void)_automaticallyRebuildIfNeeded;
- (id)_newBuilderFromResponderChain:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (void)setNeedsRevalidate;
- (id)initWithDefaultBuilder:(id)a0 shouldAutomaticallyRebuild:(BOOL)a1 adaptBuilderToResponderPre:(id /* block */)a2 adaptBuilderToResponderPost:(id /* block */)a3;

@end
