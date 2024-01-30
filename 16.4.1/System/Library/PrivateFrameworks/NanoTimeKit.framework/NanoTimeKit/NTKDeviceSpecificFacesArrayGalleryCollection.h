@class CLKDevice;

@interface NTKDeviceSpecificFacesArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;

- (id)initWithDevice:(id)a0;
- (id)descriptionText;
- (id)title;
- (void).cxx_destruct;
- (id)facesForDevice:(id)a0;
- (void)loadFaces;

@end
