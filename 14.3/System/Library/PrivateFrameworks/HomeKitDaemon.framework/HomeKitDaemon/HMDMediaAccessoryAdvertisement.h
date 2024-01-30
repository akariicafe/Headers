@class HMDMediaOutputDevice;
@protocol HMFLocking;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {
    id<HMFLocking> _lock;
}

@property (retain) HMDMediaOutputDevice *outputDevice;
@property (getter=isAssociated) BOOL associated;

+ (BOOL)canAirPortExpressSupportMediaAccessory:(id)a0;

- (long long)associationOptions;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOutputDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2;
- (BOOL)matchesWACDeviceID:(id)a0;

@end
