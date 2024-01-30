@class NSString;

@interface PPFlightAirport : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *iataCode;
@property (readonly, nonatomic) unsigned char role;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 iataCode:(id)a1 role:(unsigned char)a2;
- (BOOL)isEqualToPPFlightAirport:(id)a0;

@end
