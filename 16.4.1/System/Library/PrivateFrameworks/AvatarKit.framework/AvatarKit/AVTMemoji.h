@class SCNMaterial, AVTAssetResourceCache, AVTPreset, SCNNode, AVTColorPreset, AVTAvatarBodyPose, NSDictionary, AVTComponent, AVTCompositor, AVTComponentInstance;

@interface AVTMemoji : AVTAvatar {
    unsigned long long _usageIntent;
    AVTAssetResourceCache *_resourceCache;
    BOOL _needsUpdate;
    SCNNode *_headComponentContainer;
    SCNNode *_bodyComponentContainer;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_eyelashes;
    SCNNode *_eyesAndMouth;
    SCNMaterial *_eyeMaterialLeft;
    SCNMaterial *_eyeMaterialRight;
    NSDictionary *_eyesAndMouthSpecializationSettings;
    AVTComponent *_components[37];
    AVTComponentInstance *_componentInstances[37];
    unsigned long long _componentDirtyMask;
    unsigned long long _componentAnimatedMask;
    AVTPreset *_presets[36];
    AVTPreset *_resolvedPresets[36];
    AVTPreset *_currentPresetsForVariants[36];
    BOOL _hasPresetDependency[36];
    AVTColorPreset *_colorPresets[36][3];
    struct CGImage { } *_combinedAOImage;
    BOOL _aoValid;
    AVTCompositor *_compositor;
    unsigned long long _compositorComponentDirtyMask;
    BOOL _hairPhysicsShouldIgnoreUpperNodes;
    SCNNode *_headSkeletonRootNode;
    SCNNode *_bodySkeletonRootNode;
    AVTAvatarBodyPose *_bodyPose;
    NSDictionary *_specializationSettings;
    id /* block */ _componentAssetNodeObservationForStickerBlock;
}

+ (BOOL)supportsSecureCoding;
+ (id)memoji;
+ (id)neutralMemojiPresetsIdentifiersPerCategory;
+ (id)neutralMemojiDataRepresentation;
+ (id)memojiWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)memojiWithContentsOfURL:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
+ (id)neutralMemoji;
+ (id)neutralMemojiDescriptor;

- (id)components;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (void)update;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)resetToDefault;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)randomize;
- (id)headNode;
- (id)colorPresetForCategory:(long long)a0;
- (id)presetForCategory:(long long)a0;
- (id)componentWithType:(long long)a0;
- (void)setPreset:(id)a0 forCategory:(long long)a1 animated:(BOOL)a2;
- (id)colorPresetForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
- (void)setColorPreset:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2;
- (void)setShowsBody:(BOOL)a0;
- (id)skinColor;
- (float)arScale;
- (id)facialhairColor;
- (BOOL)hasPresetDepencencyForCategory:(long long)a0;
- (void)updateEyeLashes;
- (id)_componentInstanceAssetNodeForDependencyOfType:(long long)a0 isAssetSpecific:(BOOL)a1;
- (double)skinTextureSize;
- (void)_applyAllColorPresetsForCategory:(long long)a0;
- (void)_applyColorPresetForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
- (void)_invalidateAOImage;
- (void)_removeComponent:(id)a0;
- (void)_setAssetSpecificVariantDependenciesEnabled:(BOOL)a0 forPreset:(id)a1 dirtyComponents:(unsigned long long)a2;
- (void)_setMorphWeight:(float)a0 forDependencyVariant:(id)a1 ofType:(long long)a2 isAssetSpecific:(BOOL)a3;
- (void)_setVariantDependenciesEnabled:(BOOL)a0 forPreset:(id)a1 dirtyComponents:(unsigned long long)a2;
- (void)_updateAO;
- (void)addComponent:(id)a0 animated:(BOOL)a1;
- (void)addComponentAssetNode:(id)a0 toNode:(id)a1;
- (id)allBuiltinAssetNodes;
- (unsigned long long)applyPresetDependenciesForPreset:(id)a0 presetsBeingReplacedCategories:(unsigned long long)a1 recursionDepth:(unsigned char)a2;
- (void)applyVariantDependenciesForPreset:(id)a0 dirtyComponents:(unsigned long long)a1;
- (void /* unknown type, empty encoding */)arOffset;
- (id)assetContainerNodes;
- (id)assetResourceCache;
- (id)avatarNode;
- (id)bodyPose;
- (id)builtinAssetNodeForComponentType:(long long)a0;
- (void)componentDidChangeForType:(long long)a0 animated:(BOOL)a1;
- (id)componentForType:(long long)a0;
- (id)componentInstanceForType:(long long)a0;
- (void)componentMaterialDidUpdate:(id)a0;
- (id)copyWithUsageIntent:(unsigned long long)a0;
- (struct CGImage { } *)createSkinAO;
- (id)eyebrowsColor;
- (id)hairColor;
- (id)initWithDescriptor:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
- (id)lipsColor;
- (void)morphTo:(id)a0;
- (id)newDescriptor;
- (void)rebuildSpecializationSettings;
- (void)removeAllComponents;
- (void)removeComponentAssetNodeFromParentNode:(id)a0;
- (void)removeComponentWithType:(long long)a0;
- (id)resolvedPresetForCategory:(long long)a0;
- (id)secondaryColorPresetForCategory:(long long)a0;
- (void)setBodyPose:(id)a0;
- (void)setColorPreset:(id)a0 forCategory:(long long)a1;
- (void)setComponentAssetNodeObservationForStickerBlock:(id /* block */)a0;
- (void)setInstance:(id)a0 forComponentType:(long long)a1;
- (void)setPreset:(id)a0 forCategory:(long long)a1;
- (void)setSecondaryColorPreset:(id)a0 forCategory:(long long)a1;
- (BOOL)showsBody;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (unsigned long long)unapplyPresetDependenciesForPreset:(id)a0 presetsBeingReplacedCategories:(unsigned long long)a1 recursionDepth:(unsigned char)a2;
- (void)unapplyVariantDependenciesForPreset:(id)a0 dirtyComponents:(unsigned long long)a1;
- (void)updateBodyPose;
- (void)updateHighlightsForComponentType:(long long)a0;
- (void)updateMorphVariantsInNodeHierarchy:(id)a0 componentType:(long long)a1 variant:(id)a2 weight:(float)a3;
- (void)updateSkinMaterial:(id)a0;
- (void)updateStickerMorphVariantsInNodeHierarchy:(id)a0;
- (unsigned long long)usageIntent;
- (BOOL)usesSkinningForEyeOrientation;

@end
