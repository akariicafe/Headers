@class NSString;

@interface SGFlight : NSObject

@property (readonly, nonatomic) NSString *flightno;
@property (readonly, nonatomic) NSString *airline;
@property (readonly, nonatomic) NSString *departureAirportDescription;
@property (readonly, nonatomic) NSString *arrivalAirportDescription;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCarrier:(id)a0 flightNo:(id)a1 depDesc:(id)a2 arrDesc:(id)a3;

@end
