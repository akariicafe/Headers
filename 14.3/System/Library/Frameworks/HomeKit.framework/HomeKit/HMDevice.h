@class NSUUID, NSString, NSArray, HMFKey, HMFUnfairLock;

@interface HMDevice : NSObject <HMFObject, HMObjectMerge, NSSecureCoding> {
    NSString *_idsDestination;
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *idsIdentifier;
@property (copy) HMFKey *rapportIRK;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (copy) NSString *name;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)IDSDeviceForIDSService:(id)a0;
- (id)IDSDestinationForIDSService:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
