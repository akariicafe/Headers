@class NSString, NSArray, NSData;

@interface _SFPBFlight : PBCodable <_SFPBFlight, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *flightID;
@property (copy, nonatomic) NSString *carrierCode;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *flightNumber;
@property (copy, nonatomic) NSArray *legs;
@property (copy, nonatomic) NSString *operatorCarrierCode;
@property (copy, nonatomic) NSString *operatorFlightNumber;
@property (copy, nonatomic) NSString *carrierPhoneNumber;
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
- (unsigned long long)legsCount;
- (void)clearLegs;
- (void)addLegs:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (id)legsAtIndex:(unsigned long long)a0;

@end
