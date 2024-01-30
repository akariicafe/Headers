@class NSUUID, NSString, HMAccessoryCategory, NSArray, HMHome;

@interface HMAccessoryNetworkProtectionGroup : NSObject <HMFObject, HMObjectMerge, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMHome *home;
@property (readonly) NSUUID *uuid;
@property (copy) NSString *manufacturer;
@property (retain) HMAccessoryCategory *category;
@property long long targetProtectionMode;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSArray *accessories;
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
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithHome:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithUUID:(id)a0 manufacturer:(id)a1 category:(id)a2 protectionMode:(long long)a3;
- (void)updateProtectionMode:(long long)a0 completion:(id /* block */)a1;

@end
