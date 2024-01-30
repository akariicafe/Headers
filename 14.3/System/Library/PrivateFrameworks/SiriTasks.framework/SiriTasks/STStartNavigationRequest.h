@class STSiriLocation, NSString, NSDate;

@interface STStartNavigationRequest : AFSiriRequest {
    STSiriLocation *_startLocation;
    STSiriLocation *_destinationLocation;
    long long _directionsType;
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)arrivalDate;
- (long long)directionsType;
- (id)destinationLocation;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)departureDate;
- (id)startLocation;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithStartLocation:(id)a0 destinationLocation:(id)a1 directionsType:(long long)a2 arrivalDate:(id)a3 departureDate:(id)a4 extSessionGuid:(id)a5 extSessionGuidCreatedTimestamp:(id)a6;

@end
