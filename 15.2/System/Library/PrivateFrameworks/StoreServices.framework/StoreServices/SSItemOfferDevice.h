@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject

@property (readonly, nonatomic) long long deviceIdentifier;
@property (readonly, nonatomic) NSString *minimumProductVersion;
@property (readonly, nonatomic) SSItemOfferDeviceError *incompatibleDeviceError;
@property (readonly, nonatomic) SSItemOfferDeviceError *incompatibleSystemError;

- (id)initWithOfferDeviceDicitionary:(id)a0;
- (id)initWithDeviceIdentifier:(long long)a0;
- (id)init;
- (void)dealloc;

@end
