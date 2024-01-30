@class AVTAvatarAttributeEditorState, AVTAvatarEditorColorsState, NSString, AVTUIEnvironment, AVTCoreModel, AVTColorLayerProvider, AVTPresetImageProvider, AVTAvatarAttributeEditorPreloader, AVTAvatarRecord, AVTUIStickerRenderer, AVTAvatarConfiguration, AVTMemoji;
@protocol AVTUILogger, AVTAvatarAttributeEditorModelManagerDelegate;

@interface AVTAvatarAttributeEditorModelManager : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal>

@property (retain, nonatomic) AVTAvatarConfiguration *presetOverriddenConfiguration;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) AVTMemoji *avatar;
@property (readonly, nonatomic) AVTCoreModel *coreModel;
@property (retain, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTAvatarConfiguration *avatarConfiguration;
@property (readonly, nonatomic) AVTPresetImageProvider *imageProvider;
@property (readonly, nonatomic) AVTColorLayerProvider *colorLayerProvider;
@property (readonly, nonatomic) AVTUIStickerRenderer *stickerRenderer;
@property (readonly, nonatomic) AVTAvatarAttributeEditorPreloader *preloader;
@property (readonly, copy, nonatomic) AVTAvatarRecord *avatarRecord;
@property (readonly, nonatomic) AVTAvatarEditorColorsState *colorsState;
@property (readonly, nonatomic) AVTAvatarAttributeEditorState *editorState;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorModelManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)a0;
- (void)applyConfigurationToAvatar:(id)a0 animated:(BOOL)a1;
- (void)applyPairColorUpdateIfNeeded:(id)a0 forCategoryRight:(long long)a1 categoryLeft:(long long)a2;
- (void)applyPairColorUpdatesIfNeeded:(id)a0;
- (id)buildInitialEditorState;
- (void)buildIntitialColorsState;
- (id)buildUIModel;
- (id)buildUIModelWithSelectedCategory:(id)a0 atIndex:(unsigned long long)a1;
- (void)flushResourcesForEnteringBackground;
- (id)initWithAvatarRecord:(id)a0 coreModel:(id)a1 editorColorsState:(id)a2 imageProvider:(id)a3 colorLayerProvider:(id)a4 preloader:(id)a5 environment:(id)a6 stickerRenderer:(id)a7;
- (id)initWithAvatarRecord:(id)a0 coreModel:(id)a1 imageProvider:(id)a2 colorLayerProvider:(id)a3 preloader:(id)a4 environment:(id)a5 stickerRenderer:(id)a6;
- (void)loadResourcesIfNeeded;
- (BOOL)primaryColorOfCategory:(long long)a0 doesMatchColorOfDependentCategory:(long long)a1;
- (void)setInitialColorStateForColorPicker:(id)a0 forMulticolor:(BOOL)a1;
- (BOOL)shouldDisplaySectionForCategory:(long long)a0;
- (BOOL)shouldDisplaySectionWithDisplayCondition:(id)a0 inCategoryAtIndex:(unsigned long long)a1;
- (void)updateAvatarByApplyingPresetOverrides:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarByDeletingSectionItems:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarBySelectingSectionItem:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarBySelectingSupplementalPickerItem:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarRecordFromAvatar;
- (void)updateAvatarWithAvatarUpdater:(id /* block */)a0 animated:(BOOL)a1;
- (void)updateEditorStateBySelectingSectionItem:(id)a0 animated:(BOOL)a1;

@end
