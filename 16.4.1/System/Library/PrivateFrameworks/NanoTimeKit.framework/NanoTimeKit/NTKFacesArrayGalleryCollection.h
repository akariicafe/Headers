@class NSArray;

@interface NTKFacesArrayGalleryCollection : NTKGalleryCollection

@property (copy, nonatomic) NSArray *faces;

- (id)faceAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfFaces;
- (void).cxx_destruct;
- (unsigned long long)indexOfFace:(id)a0;

@end
