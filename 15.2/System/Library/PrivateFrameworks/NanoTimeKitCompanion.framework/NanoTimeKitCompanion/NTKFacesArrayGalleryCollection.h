@class NSArray;

@interface NTKFacesArrayGalleryCollection : NTKGalleryCollection

@property (copy, nonatomic) NSArray *faces;

- (id)faceAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfFaces;
- (unsigned long long)indexOfFace:(id)a0;

@end
