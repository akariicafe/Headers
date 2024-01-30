@class NSString, NSNumber;

@interface HMDAccessoryMetricVendorDetails : HMFObject

@property (class, readonly) unsigned long long maximumDifferentiationNumber;

@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSNumber *differentiationNumber;

- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;

@end
