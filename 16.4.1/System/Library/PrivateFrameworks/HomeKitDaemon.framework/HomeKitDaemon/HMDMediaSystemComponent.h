@class NSUUID, HMDAccessory, HMDMediaProfile, HMMediaSystemRole, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDMediaSystemComponent : HMFObject <NSSecureCoding, HMFDumpState, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) HMDMediaProfile *mediaProfile;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) HMMediaSystemRole *role;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)a0 home:(id)a1;
+ (id)accessoryForMediaSystemComponentWithDictionary:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)privateDescription;
- (void)setRole:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)attributeDescriptions;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 accessory:(id)a1 role:(id)a2;

@end
