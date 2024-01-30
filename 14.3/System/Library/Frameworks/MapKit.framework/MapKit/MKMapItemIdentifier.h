@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}

- (unsigned long long)muid;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithMUID:(unsigned long long)a0;
- (id)geoMapItemIdentifier;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (id)initWithGEOMapItemIdentifier:(id)a0;
- (id)debugDescription;

@end
