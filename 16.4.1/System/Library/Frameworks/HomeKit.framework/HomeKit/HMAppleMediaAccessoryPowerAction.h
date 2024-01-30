@class HMAccessory;

@interface HMAppleMediaAccessoryPowerAction : HMAction <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (nonatomic) unsigned long long targetSleepWakeState;

+ (BOOL)supportsSecureCoding;

- (id)initWithUUID:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_handleUpdates:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)_serializeForAdd;
- (id)initWithAccessory:(id)a0 targetSleepWakeState:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (BOOL)isAffectedByEndEvents;
- (void)updateWithAction:(id)a0 completionHandler:(id /* block */)a1;

@end
