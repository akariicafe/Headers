@class CLKDevice;

@interface NTKCDeviceSpecificFacesArrayGalleryCollection : NTKCFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;

+ (id)facesForDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)descriptionText;
- (id)title;
- (void)loadFaces;

@end
