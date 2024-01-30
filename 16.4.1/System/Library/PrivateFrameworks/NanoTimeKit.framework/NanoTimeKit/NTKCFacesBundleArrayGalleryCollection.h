@class NTKFaceBundle, CLKDevice;

@interface NTKCFacesBundleArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NTKFaceBundle *faceBundle;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 faceBundle:(id)a1;
- (void)loadFaces;

@end
