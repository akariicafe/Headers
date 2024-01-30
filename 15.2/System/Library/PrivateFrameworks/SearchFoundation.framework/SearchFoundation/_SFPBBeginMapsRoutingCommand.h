@class NSData, _SFPBLatLng, NSString;

@interface _SFPBBeginMapsRoutingCommand : PBCodable <_SFPBBeginMapsRoutingCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int directionsMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
