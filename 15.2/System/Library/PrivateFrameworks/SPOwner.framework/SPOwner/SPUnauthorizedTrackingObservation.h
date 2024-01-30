@class NSArray, SPUnauthorizedTrackingAdvertisement, NSDate;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;
@property (copy, nonatomic) NSArray *observedLocations;
@property (copy, nonatomic) NSDate *observedAt;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)a0 observedLocations:(id)a1;

@end
