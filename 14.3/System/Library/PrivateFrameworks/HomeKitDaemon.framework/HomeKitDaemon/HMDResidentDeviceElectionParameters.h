@class HMFBoolean, NSArray, NSSet, HMFProductInfo, HMDHomeKitVersion, HMDResidentDevice;

@interface HMDResidentDeviceElectionParameters : HMFObject {
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
    NSSet *_accessories;
}

@property (readonly) HMDResidentDevice *resident;
@property (readonly, copy, getter=isEnabled) HMFBoolean *enabled;
@property (readonly) long long location;
@property (readonly, copy) NSArray *accessories;

- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithResident:(id)a0 serializedPayload:(id)a1;
- (id)initWithResident:(id)a0 enabled:(id)a1 location:(long long)a2 accessories:(id)a3;
- (id)serializedPayload;

@end
