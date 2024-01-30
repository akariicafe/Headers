@class NSMapTable, SCNScene, AVTAvatar, NSMutableArray;

@interface AVTStickerConfigurationReversionContext : NSObject {
    SCNScene *_scene;
    AVTAvatar *_avatar;
    NSMutableArray *_presetOverrides;
    NSMutableArray *_morpherOverrides;
    NSMapTable *_shaderModifiers;
    NSMapTable *_customMaterialProperties;
    NSMutableArray *_singleSidedMaterials;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetForAvatar:(id)a0;
- (void)revertChanges;
- (void)savePresetOverride:(id)a0;
- (void)saveMorpherOverride:(id)a0;
- (void)saveShaderModifiers:(id)a0 forMaterial:(id)a1;
- (void)saveCustomMaterialPropertyNamed:(id)a0 forMaterial:(id)a1;
- (void)saveSingleSidedForMaterial:(id)a0;

@end
