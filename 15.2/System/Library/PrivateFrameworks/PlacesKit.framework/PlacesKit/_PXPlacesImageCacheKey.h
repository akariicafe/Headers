@class NSString;
@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject {
    id<PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (id)key;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithGeotaggable:(id)a0 andKey:(id)a1;
- (id)geotaggable;

@end
