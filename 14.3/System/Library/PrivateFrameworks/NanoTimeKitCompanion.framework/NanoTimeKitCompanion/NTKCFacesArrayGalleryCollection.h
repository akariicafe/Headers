@class NSArray;

@interface NTKCFacesArrayGalleryCollection : NTKCGalleryCollection

@property (copy, nonatomic) NSArray *faces;

- (unsigned long long)numberOfFaces;
- (void).cxx_destruct;
- (id)faceAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfFace:(id)a0;

@end
