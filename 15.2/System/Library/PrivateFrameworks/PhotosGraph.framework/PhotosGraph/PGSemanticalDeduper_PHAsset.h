@class PHPhotoLibrary;

@interface PGSemanticalDeduper_PHAsset : PGSemanticalDeduper {
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)sceneprintByItemIdentifierWithItems:(id)a0;

@end
