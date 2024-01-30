@class NSArray, SPUnauthorizedTrackingAdvertisement, NSDate;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;
@property (copy, nonatomic) NSArray *observedLocations;
@property (copy, nonatomic) NSDate *observedAt;

- (void).cxx_destruct;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)a0 observedLocations:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
