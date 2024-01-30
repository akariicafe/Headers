@class NSString, NSUUID, HMDHome, HMFUnfairLock, NSNumber;

@interface HMDAccessoryNetworkProtectionGroup : NSObject <NSSecureCoding, HMDBackingStoreObjectProtocol> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDHome *home;
@property (nonatomic) long long targetProtectionMode;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSNumber *category;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)configureWithHome:(id)a0;
- (id)modelForVersion:(long long)a0;
- (id)modelWithObjectChangeType:(unsigned long long)a0;
- (id)initWithUUID:(id)a0 manufacturer:(id)a1 category:(id)a2 targetProtectionMode:(long long)a3;

@end
