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

- (id)departureDate;
- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)startLocation;
- (void).cxx_destruct;
- (id)destinationLocation;
- (long long)directionsType;
- (id)initWithCoder:(id)a0;
- (id)arrivalDate;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)_initWithStartLocation:(id)a0 destinationLocation:(id)a1 directionsType:(long long)a2 arrivalDate:(id)a3 departureDate:(id)a4 extSessionGuid:(id)a5 extSessionGuidCreatedTimestamp:(id)a6;

@end
