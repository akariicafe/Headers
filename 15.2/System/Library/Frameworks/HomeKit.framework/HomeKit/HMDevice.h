@class NSString, NSUUID, NSArray, HMFKey;

@interface HMDevice : NSObject <HMFObject, HMObjectMerge, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) HMFKey *rapportIRK;
@property (readonly, copy) NSString *idsDestination;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (copy) NSString *name;
@property (readonly, copy) NSUUID *idsIdentifier;
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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithUUID:(id)a0 name:(id)a1 isCurrentDevice:(BOOL)a2 idsIdentifier:(id)a3 idsDestination:(id)a4 rapportIRK:(id)a5;
- (id)IDSDeviceForIDSService:(id)a0;
- (id)IDSDestinationForIDSService:(id)a0;

@end
