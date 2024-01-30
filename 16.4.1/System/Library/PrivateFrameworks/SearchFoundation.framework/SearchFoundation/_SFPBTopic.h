@class NSString, _SFPBWeatherDetails, NSData, _SFPBFlightDetails;

@interface _SFPBTopic : PBCodable <_SFPBTopic, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *query;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) _SFPBFlightDetails *flight;
@property (retain, nonatomic) _SFPBWeatherDetails *weather;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)initWithSFTopic:(id)a0;

@end
