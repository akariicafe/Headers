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

- (id)shortDebugDescription;
- (id)initWithPlace:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMapsIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithMUID:(unsigned long long)a0;
- (id)description;
- (id)initWithMapItem:(id)a0;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;
- (id)mapsIdentifier;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (void)encodeWithXPCCoder:(id)a0;
- (id)debugDescription;
- (id)initWithBasemapId:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (BOOL)isEqualToGEOMapItemIdentifier:(id)a0;
- (id)initWithXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
