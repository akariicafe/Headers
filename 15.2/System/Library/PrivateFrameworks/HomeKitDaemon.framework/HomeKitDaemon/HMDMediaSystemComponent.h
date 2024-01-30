@class NSUUID, HMDAccessory, HMDMediaProfile, HMMediaSystemRole, NSObject, NSString;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDMediaSystemComponent : HMFObject <NSSecureCoding, HMFDumpState, HMFLogging> {
    id<HMFLocking> _lock;
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
+ (BOOL)decodeComponents:(id)a0 leftUUID:(id *)a1 leftAccessory:(id *)a2 rightUUID:(id *)a3 rightAccessory:(id *)a4;
+ (id)componentsWithLeftComponent:(id)a0 leftAccessory:(id)a1 rightComponent:(id)a2 rightAccessory:(id)a3;
+ (id)accessoryForMediaSystemComponentWithDictionary:(id)a0 home:(id)a1;

- (id)dumpState;
- (id)attributeDescriptions;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)serialize;
- (void)setRole:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithUUID:(id)a0 accessory:(id)a1 role:(id)a2;

@end
