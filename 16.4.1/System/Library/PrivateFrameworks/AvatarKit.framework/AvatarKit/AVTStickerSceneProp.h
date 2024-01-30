@class SCNNode;

@interface AVTStickerSceneProp : AVTStickerProp

@property (readonly, nonatomic) SCNNode *rootNode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)a0 withCamera:(id)a1 options:(id)a2 forExport:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)dictionaryWithTargetPath:(id)a0;
- (id)initWithRootNode:(id)a0 scale:(SEL)a1 position:(id)a2 rotation:(BOOL)a3 renderLast:(id)a4 palettesDescriptions:(id)a5 modifiers:(id)a6 adjustments:(void /* unknown type, empty encoding */)a7;

@end
