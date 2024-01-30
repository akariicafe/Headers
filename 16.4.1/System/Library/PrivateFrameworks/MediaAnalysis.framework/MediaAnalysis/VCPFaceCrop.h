@class NSString, NSData, VCPPhotosFace;

@interface VCPFaceCrop : NSObject {
    NSData *_faceCropData;
    VCPPhotosFace *_originatingFace;
    struct CGSize { double width; double height; } _cachedImageDimensions;
}

@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) short state;

+ (id)generateFaceCropsForFace:(id)a0 resourceURL:(id)a1 groupingIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })imageDimensions;
- (id)description;
- (void).cxx_destruct;
- (id)originatingFace;
- (id)faceCropData;
- (id)initWithFaceCropData:(id)a0 originatingFace:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 faceCropData:(id)a1;

@end
