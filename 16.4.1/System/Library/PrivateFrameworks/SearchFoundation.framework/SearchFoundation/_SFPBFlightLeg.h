@class _SFPBAirport, NSString, NSData, _SFPBDate;

@interface _SFPBFlightLeg : PBCodable <_SFPBFlightLeg, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int status;
@property (retain, nonatomic) _SFPBDate *departurePublishedTime;
@property (retain, nonatomic) _SFPBDate *departureActualTime;
@property (copy, nonatomic) NSString *departureTerminal;
@property (copy, nonatomic) NSString *departureGate;
@property (retain, nonatomic) _SFPBAirport *departureAirport;
@property (retain, nonatomic) _SFPBDate *arrivalPublishedTime;
@property (retain, nonatomic) _SFPBDate *arrivalActualTime;
@property (copy, nonatomic) NSString *arrivalTerminal;
@property (copy, nonatomic) NSString *arrivalGate;
@property (retain, nonatomic) _SFPBAirport *arrivalAirport;
@property (retain, nonatomic) _SFPBAirport *divertedAirport;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *baggageClaim;
@property (retain, nonatomic) _SFPBDate *departureGateClosedTime;
@property (retain, nonatomic) _SFPBDate *departureRunwayTime;
@property (retain, nonatomic) _SFPBDate *arrivalRunwayTime;
@property (retain, nonatomic) _SFPBDate *arrivalGateTime;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
