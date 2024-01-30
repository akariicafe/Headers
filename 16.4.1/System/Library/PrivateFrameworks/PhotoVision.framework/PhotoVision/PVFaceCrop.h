@class NSData, PVFace;

@interface PVFaceCrop : PVObject {
    NSData *_faceCropData;
    PVFace *_originatingFace;
    struct CGSize { double width; double height; } _cachedImageDimensions;
}

@property (nonatomic) short state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })imageDimensions;
- (id)description;
- (void).cxx_destruct;
- (id)originatingFace;
- (id)faceCropData;
- (id)initWithFaceCropData:(id)a0 originatingFace:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 faceCropData:(id)a1;

@end
