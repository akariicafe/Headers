@class NSUUID, NSString, HMAccessoryCategory, NSArray, HMFUnfairLock, HMHome;

@interface HMAccessoryNetworkProtectionGroup : NSObject <HMObjectMerge, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMHome *home;
@property (readonly) NSUUID *uuid;
@property (copy) NSString *manufacturer;
@property (retain) HMAccessoryCategory *category;
@property long long targetProtectionMode;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSArray *accessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithUUID:(id)a0 manufacturer:(id)a1 category:(id)a2 protectionMode:(long long)a3;
- (void)updateProtectionMode:(long long)a0 completion:(id /* block */)a1;
- (void)_configureWithHome:(id)a0;

@end
