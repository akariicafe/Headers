@class HMMediaProfile, NSUUID, HMMediaSystemRole, HMAccessory, NSString, HMFUnfairLock;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {
    HMFUnfairLock *_lock;
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

- (id)serialize;
- (void)setRole:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaProfile:(id)a0 role:(id)a1;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigure;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 mediaProfile:(id)a1 role:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)_updateAccessoryReference:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
