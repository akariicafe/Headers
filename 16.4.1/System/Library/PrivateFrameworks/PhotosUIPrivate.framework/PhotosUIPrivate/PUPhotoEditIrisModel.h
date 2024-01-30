@class PUPhotoEditIrisModelChange, PICompositionController, NSString;
@protocol PUEditableAsset;

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying, PXEditLivePhotoModel>

@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic) unsigned short editingVisibility;
@property (readonly, nonatomic) unsigned short assetVisibility;
@property (readonly, nonatomic) BOOL assetHasAdjustments;
@property (readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateChangeRequestForRevert:(id)a0;

- (id)newViewModelChange;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)compositionDidChange;
- (void)_updateAutoDisableStateIfNeeded;
- (BOOL)_hasLegacyIrisConflicts;
- (void)_setHidden:(BOOL)a0 explicit:(BOOL)a1 supportable:(BOOL)a2;
- (id)initWithAsset:(id)a0 compositionController:(id)a1;
- (id)initWithIrisVisibilityState:(unsigned short)a0 hasAdjustments:(BOOL)a1 compositionController:(id)a2;
- (void)notifyCannotSupportVideoEdits;
- (BOOL)reenablingLivePhotoShouldRemoveEdits;
- (void)updateChangeRequestForSave:(id)a0;

@end
