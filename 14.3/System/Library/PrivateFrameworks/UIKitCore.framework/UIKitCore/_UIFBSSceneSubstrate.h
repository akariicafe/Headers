@class NSMapTable;

@interface _UIFBSSceneSubstrate : _UIContextBinderSubstrate {
    NSMapTable *_sceneLayerTable;
}

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)detachContext:(id)a0;
- (void)attachContext:(id)a0;

@end
