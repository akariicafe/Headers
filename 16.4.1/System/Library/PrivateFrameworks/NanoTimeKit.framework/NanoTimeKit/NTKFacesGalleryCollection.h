@class NSArray, NSString;

@interface NTKFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection {
    NSArray *_faceDescriptors;
    NSString *_title;
}

- (id)title;
- (void).cxx_destruct;
- (id)facesForDevice:(id)a0;
- (id)initWithDevice:(id)a0 title:(id)a1 faceDescriptors:(id)a2;

@end
