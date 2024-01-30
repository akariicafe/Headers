@class SCNNode, NSMapTable, AVTAvatarEnvironment, SCNScene, AVTAvatar, NSMutableArray, NSNumber;

@interface AVTStickerConfigurationReversionContext : NSObject {
    SCNScene *_scene;
    AVTAvatar *_avatar;
    NSMutableArray *_presetOverrides;
    NSMutableArray *_morpherOverrides;
    NSMapTable *_shaderModifiers;
    NSMapTable *_customMaterialProperties;
    NSMutableArray *_singleSidedMaterials;
    SCNNode *_extraCameraNode;
    SCNNode *_extraPropsNode;
    NSNumber *_showMemojiBody;
    AVTAvatarEnvironment *_environmentForPointOfViewUpdateFromFramingMode;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetForAvatar:(id)a0;
- (void)revertChangesWithScope:(unsigned long long)a0 animationDuration:(double)a1;
- (void)saveCustomMaterialPropertyNamed:(id)a0 forMaterial:(id)a1;
- (void)saveExtraCameraNode:(id)a0;
- (void)saveExtraPropsNode:(id)a0;
- (void)saveMorpherOverride:(id)a0;
- (void)savePresetOverride:(id)a0;
- (void)saveShaderModifiers:(id)a0 forMaterial:(id)a1;
- (void)saveShowMemojiBody:(BOOL)a0;
- (void)saveSingleSidedForMaterial:(id)a0;
- (void)saveUpdatePointOfViewFromFramingModeInEnvironment:(id)a0;

@end
