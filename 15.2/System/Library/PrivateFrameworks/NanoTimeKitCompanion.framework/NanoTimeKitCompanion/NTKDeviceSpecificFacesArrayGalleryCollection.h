@class CLKDevice;

@interface NTKDeviceSpecificFacesArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;

+ (id)facesForDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (id)title;
- (id)descriptionText;
- (void).cxx_destruct;
- (void)loadFaces;

@end
