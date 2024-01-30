@class HMMediaProfile, NSUUID, HMMediaSystemRole, HMAccessory, NSString;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly, weak, nonatomic) HMMediaProfile *mediaProfile;
@property (readonly, nonatomic) HMMediaSystemRole *role;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)logIdentifier;
- (void)setRole:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)_unconfigure;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 mediaProfile:(id)a1 role:(id)a2;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_updateAccessoryReference:(id)a0;
- (id)initWithMediaProfile:(id)a0 role:(id)a1;
- (BOOL)mergeRoleWithComponent:(id)a0;

@end
