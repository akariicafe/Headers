@interface MIOImageSize : NSObject <NSCopying> {
    struct ImageFeatureType_ImageSize { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; unsigned long long width_; unsigned long long height_; int _cached_size_; } _imageSizeParams;
}

@property (readonly, nonatomic) long long pixelsWide;
@property (readonly, nonatomic) long long pixelsHigh;

- (long long)compare:(id)a0;
- (id)initWithSpecification:(const void *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;

@end
