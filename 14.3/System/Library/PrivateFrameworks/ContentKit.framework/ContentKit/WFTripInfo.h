@class NSString, NSMeasurement, WFTimeInterval;

@interface WFTripInfo : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *routeName;
@property (readonly, nonatomic) NSMeasurement *distance;
@property (readonly, nonatomic) WFTimeInterval *expectedTravelTime;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMKRoute:(id)a0;

@end
