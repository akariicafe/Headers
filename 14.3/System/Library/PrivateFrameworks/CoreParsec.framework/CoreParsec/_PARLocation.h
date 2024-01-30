@class _PARRevGeoResolution, NSData, NSString;

@interface _PARLocation : PBCodable <_PARLocation, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) int source;
@property (nonatomic) float horizontalAccuracy;
@property (retain, nonatomic) _PARRevGeoResolution *revGeoResolution;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
