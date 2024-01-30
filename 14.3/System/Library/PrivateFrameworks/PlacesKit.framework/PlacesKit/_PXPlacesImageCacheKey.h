@class NSString;
@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject {
    id<PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)key;
- (BOOL)isEqual:(id)a0;
- (id)initWithGeotaggable:(id)a0 andKey:(id)a1;
- (id)geotaggable;

@end
