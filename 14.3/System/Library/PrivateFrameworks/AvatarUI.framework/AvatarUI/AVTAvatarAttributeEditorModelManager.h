@class NSString, AVTUIEnvironment, AVTCoreModel, AVTColorLayerProvider, AVTPresetImageProvider, AVTAvatarAttributeEditorPreloader, AVTAvatarRecord, AVTAvatarConfiguration, AVTAvatarAttributeEditorState, AVTMemoji;
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
@property (readonly, nonatomic) AVTAvatarAttributeEditorPreloader *preloader;
@property (readonly, copy, nonatomic) AVTAvatarRecord *avatarRecord;
@property (readonly, nonatomic) AVTAvatarAttributeEditorState *editorState;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorModelManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldDisplaySectionForCategory:(long long)a0;
- (BOOL)shouldDisplaySectionWithDisplayCondition:(id)a0 inCategoryAtIndex:(unsigned long long)a1;
- (id)initWithAvatarRecord:(id)a0;
- (id)initWithAvatarRecord:(id)a0 coreModel:(id)a1 imageProvider:(id)a2 colorLayerProvider:(id)a3 preloader:(id)a4 environment:(id)a5;
- (id)buildInitialEditorState;
- (void)loadResourcesIfNeeded;
- (void)flushResourcesForEnteringBackground;
- (id)buildUIModelWithSelectedCategory:(id)a0 atIndex:(unsigned long long)a1;
- (void)updateAvatarWithAvatarUpdater:(id /* block */)a0 animated:(BOOL)a1;
- (void)applyConfigurationToAvatar:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarRecordFromAvatar;
- (void)applyPairColorUpdateIfNeeded:(id)a0 forCategoryRight:(long long)a1 categoryLeft:(long long)a2;
- (void)applyPairColorUpdatesIfNeeded:(id)a0;
- (id)buildUIModel;
- (void)updateAvatarBySelectingSectionItem:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarBySelectingSupplementalPickerItem:(id)a0 animated:(BOOL)a1;
- (void)updateAvatarByApplyingPresetOverrides:(id)a0 animated:(BOOL)a1;

@end
