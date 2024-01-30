@class NSArray, NSString, FUAirline, NSDate, FUFlightStep;

@interface FUFlight : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *codeShares;
@property (retain) FUAirline *displayAirline;
@property (retain) NSString *queriedAirlineTitle;
@property unsigned long long displayFlightNumber;
@property (retain) FUAirline *airline;
@property unsigned long long flightNumber;
@property (retain) NSString *flightIdentifier;
@property (retain) NSString *cancellationMessage;
@property (retain, nonatomic) NSArray *allLegs;
@property (retain) NSArray *legs;
@property (retain, nonatomic) NSString *identifier;
@property unsigned long long departureLegIndex;
@property unsigned long long arrivalLegIndex;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *rawResponse;
@property (readonly) NSString *displayFlightCode;
@property (readonly) NSString *flightCode;
@property (readonly) long long status;
@property (readonly) FUFlightStep *departure;
@property (readonly) FUFlightStep *arrival;
@property (readonly) double duration;

+ (void)loadFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 completionHandler:(id /* block */)a4;
+ (id)timeFormatterForIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)lastLeg;
- (void)encodeWithCoder:(id)a0;
- (void)setDepartureLegIndex:(unsigned long long)a0 arrivalLegIndex:(unsigned long long)a1;
- (id)firstLeg;
- (id)legsAsFlights;
- (id)relevantLeg;

@end
