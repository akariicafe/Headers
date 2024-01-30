@class PHFace, PHAsset, PHPerson;

@interface PXChangePersonKeyFaceAction : PXPhotosAction {
    PHAsset *_asset;
    PHFace *_keyFace;
    PHFace *_keyFaceForUndo;
}

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHFace *keyFace;

- (void)_invalidateCache;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)_fetchKeyFaceForUndoIfNeeded;
- (id)actionNameLocalizationKey;
- (id)analyticsEventName;
- (id)initWithPerson:(id)a0 asset:(id)a1;
- (id)initWithPerson:(id)a0 keyFace:(id)a1;
- (void)performUndo:(id /* block */)a0;

@end
