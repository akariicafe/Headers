@class NSString, NTKFaceCollection;

@interface NTKCFaceCollectionGalleryCollection : NTKCGalleryCollection <NTKFaceCollectionObserver> {
    NTKFaceCollection *_faceCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionIdentifier;
- (unsigned long long)numberOfFaces;
- (void).cxx_destruct;
- (id)faceAtIndex:(unsigned long long)a0;
- (void)faceCollectionDidLoad:(id)a0;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollectionDidReorderFaces:(id)a0;
- (unsigned long long)indexOfFace:(id)a0;
- (id)initWithTitle:(id)a0 faceCollection:(id)a1;

@end
