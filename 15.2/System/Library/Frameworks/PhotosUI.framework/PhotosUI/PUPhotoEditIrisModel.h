@class PUPhotoEditIrisModelChange, PICompositionController;
@protocol PUEditableAsset;

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying>

@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController;
@property (nonatomic, setter=_setEditingVisibility:) unsigned short _editingVisibility;
@property (readonly, nonatomic) unsigned short _assetVisibility;
@property (readonly, nonatomic) BOOL _assetHasAdjustments;
@property (readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates;

+ (void)updateChangeRequestForRevert:(id)a0;

- (id)newViewModelChange;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAsset:(id)a0 compositionController:(id)a1;
- (id)initWithIrisVisibilityState:(unsigned short)a0 hasAdjustments:(BOOL)a1 compositionController:(id)a2;
- (void)notifyCannotSupportVideoEdits;
- (BOOL)reenablingLivePhotoShouldRemoveEdits;
- (void)updateChangeRequestForSave:(id)a0;
- (void)compositionDidChange;
- (void)_updateAutoDisableStateIfNeeded;
- (BOOL)_hasLegacyIrisConflicts;
- (void)_setHidden:(BOOL)a0 explicit:(BOOL)a1 supportable:(BOOL)a2;

@end
