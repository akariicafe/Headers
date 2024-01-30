@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}

- (unsigned long long)muid;
- (id)initWithGEOMapItemIdentifier:(id)a0;
- (id)initWithMUID:(unsigned long long)a0;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)geoMapItemIdentifier;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;

@end
