@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SPAdvertisement *advertisement;
@property (copy, nonatomic) SPEstimatedLocation *location;
@property (nonatomic) long long observationValue;
@property (nonatomic) BOOL refreshGeotag;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAdvertisement:(id)a0 location:(id)a1;

@end
