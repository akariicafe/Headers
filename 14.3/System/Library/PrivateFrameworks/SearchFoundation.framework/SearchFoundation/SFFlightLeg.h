@class NSString, NSDictionary, SFAirport, NSDate, NSData;

@interface SFFlightLeg : NSObject <SFFlightLeg, NSSecureCoding, NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int status;
@property (copy, nonatomic) NSDate *departurePublishedTime;
@property (copy, nonatomic) NSDate *departureActualTime;
@property (copy, nonatomic) NSString *departureTerminal;
@property (copy, nonatomic) NSString *departureGate;
@property (retain, nonatomic) SFAirport *departureAirport;
@property (copy, nonatomic) NSDate *arrivalPublishedTime;
@property (copy, nonatomic) NSDate *arrivalActualTime;
@property (copy, nonatomic) NSString *arrivalTerminal;
@property (copy, nonatomic) NSString *arrivalGate;
@property (retain, nonatomic) SFAirport *arrivalAirport;
@property (retain, nonatomic) SFAirport *divertedAirport;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *baggageClaim;
@property (copy, nonatomic) NSDate *departureGateClosedTime;
@property (copy, nonatomic) NSDate *departureRunwayTime;
@property (copy, nonatomic) NSDate *arrivalRunwayTime;
@property (copy, nonatomic) NSDate *arrivalGateTime;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasStatus;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
