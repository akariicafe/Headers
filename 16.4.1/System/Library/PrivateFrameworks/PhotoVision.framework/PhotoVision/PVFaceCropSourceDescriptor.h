@class PVImage, PVFace;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying> {
    PVFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)a0 image:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)image;
- (id)description;
- (void).cxx_destruct;
- (id)face;
- (id)initWithFace:(id)a0 image:(id)a1;

@end
