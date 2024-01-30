@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {
    NSData *_placeData;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

@property (nonatomic) BOOL isCurrentLocation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithPlaceData:(id)a0 extSessionGuid:(id)a1 extSessionGuidCreatedTimestamp:(id)a2;
- (id)mapPointData;

@end
