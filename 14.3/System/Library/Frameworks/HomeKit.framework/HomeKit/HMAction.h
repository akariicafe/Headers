@class NSUUID, _HMContext, NSString, HMFUnfairLock, HMActionSet;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (readonly) unsigned long long type;
@property (copy) NSUUID *uuid;
@property (weak) HMActionSet *actionSet;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) BOOL requiresDeviceUnlock;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (id)encodeAsProtoBuf;
- (id)initWithUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_handleUpdates:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
