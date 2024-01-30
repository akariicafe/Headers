@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject

@property (readonly, nonatomic) long long deviceIdentifier;
@property (readonly, nonatomic) NSString *minimumProductVersion;
@property (readonly, nonatomic) SSItemOfferDeviceError *incompatibleDeviceError;
@property (readonly, nonatomic) SSItemOfferDeviceError *incompatibleSystemError;

- (void)dealloc;
- (id)init;
- (id)initWithDeviceIdentifier:(long long)a0;
- (id)initWithOfferDeviceDicitionary:(id)a0;

@end
