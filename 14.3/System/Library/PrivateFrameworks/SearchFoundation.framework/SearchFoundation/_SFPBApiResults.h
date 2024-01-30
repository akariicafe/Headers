@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int status;
@property (nonatomic) int resultType;
@property (copy, nonatomic) NSArray *flights;
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
- (void)addFlights:(id)a0;
- (void)clearFlights;
- (unsigned long long)flightsCount;
- (id)flightsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;

@end
