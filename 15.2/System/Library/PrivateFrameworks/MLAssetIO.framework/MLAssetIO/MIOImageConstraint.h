@class MIOImageSizeConstraint, NSString, MIOImageSize;

@interface MIOImageConstraint : NSObject <MIOFeatureValueConstraint> {
    struct ImageFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; long long width_; long long height_; int colorspace_; union SizeFlexibilityUnion { struct ImageFeatureType_EnumeratedImageSizes *enumeratedsizes_; struct ImageFeatureType_ImageSizeRange *imagesizerange_; } SizeFlexibility_; int _cached_size_; unsigned int _oneof_case_[1]; } _imageFeatureTypeParams;
}

@property (readonly, nonatomic) MIOImageSize *imageSize;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) MIOImageSizeConstraint *sizeConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpecification:(const void *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (const void *)imageFeatureTypeSpecification;

@end
