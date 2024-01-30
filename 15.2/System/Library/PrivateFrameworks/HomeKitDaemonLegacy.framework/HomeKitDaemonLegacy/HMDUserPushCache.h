@class HMDDevice, NSDate;

@interface HMDUserPushCache : HMFObject

@property (readonly, nonatomic) HMDDevice *device;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
