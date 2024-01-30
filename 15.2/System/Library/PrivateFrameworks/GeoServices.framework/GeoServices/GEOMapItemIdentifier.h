@class NSData, GEOPDMapsIdentifier;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {
    GEOPDMapsIdentifier *_mapsIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) int resultProviderID;
@property (readonly, nonatomic, getter=hasCoordinate) BOOL hasCoordinate;
@property (readonly, nonatomic) NSData *comparableRepresentation;

+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)a0;

- (id)initWithMUID:(unsigned long long)a0;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct { double x0; double x1; })a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0;
- (id)description;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (id)shortDebugDescription;
- (BOOL)isEqualToGEOMapItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlace:(id)a0;
- (unsigned long long)hash;
- (id)initWithMapsIdentifier:(id)a0;
- (id)debugDescription;
- (id)mapsIdentifier;
- (BOOL)isValid;
- (id)initWithBasemapId:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;

@end
