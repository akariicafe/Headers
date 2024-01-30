@class PVImage, VCPPhotosFace;

@interface VCPFaceCropSourceDescriptor : NSObject <NSCopying> {
    VCPPhotosFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)a0 image:(id)a1;

- (id)face;
- (id)description;
- (void).cxx_destruct;
- (id)image;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFace:(id)a0 image:(id)a1;

@end
