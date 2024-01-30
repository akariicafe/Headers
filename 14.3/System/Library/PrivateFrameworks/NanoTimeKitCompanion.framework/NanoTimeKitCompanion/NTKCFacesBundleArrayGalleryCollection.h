@class NTKFaceBundle, CLKDevice;

@interface NTKCFacesBundleArrayGalleryCollection : NTKCFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NTKFaceBundle *faceBundle;

- (void).cxx_destruct;
- (void)loadFaces;
- (id)initWithDevice:(id)a0 faceBundle:(id)a1;

@end
