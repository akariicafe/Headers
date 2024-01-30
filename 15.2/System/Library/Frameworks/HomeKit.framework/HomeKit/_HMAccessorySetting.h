@class NSUUID, NSString, NSArray, _HMContext, HMAccessorySettings, NSObject, NSMutableOrderedSet, HMFUnfairLock;
@protocol _HMAccesorySettingDelegate, NSSecureCoding, NSCopying, OS_dispatch_queue;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding> {
    HMFUnfairLock *_lock;
    NSMutableOrderedSet *_constraints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMAccessorySettings *accessorySettings;
@property (retain, nonatomic) _HMContext *context;
@property (weak) id<_HMAccesorySettingDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly) unsigned long long properties;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *constraints;
@property (copy) id<NSCopying, NSSecureCoding> value;
@property (readonly, getter=isReflected) BOOL reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)supportedValueClasses;
+ (id)supportedConstraintClasses;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)a0 removals:(id)a1 keyPath:(id)a2;
+ (id)_encodedConstraintsToAdd:(id)a0;
+ (id)_encodedConstraintsToRemove:(id)a0;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (void)setConstraints:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)addConstraint:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeConstraint:(id)a0;
- (id)messageDestination;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unconfigureContext;
- (void)_registerNotificationHandlers;
- (void)unconfigure;
- (BOOL)mergeObject:(id)a0;
- (void)configureWithAccessorySettings:(id)a0 context:(id)a1;
- (id)initWithType:(long long)a0 properties:(unsigned long long)a1 name:(id)a2 constraints:(id)a3;
- (id)constraintWithType:(long long)a0;
- (void)notifyDelegateOfAddedConstraint:(id)a0;
- (void)addConstraint:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyDelegateOfRemovedConstraint:(id)a0;
- (void)removeConstraint:(id)a0 completionHandler:(id /* block */)a1;
- (void)setReflected:(BOOL)a0;
- (void)replaceConstraints:(id)a0 withConstraints:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateConstraints:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleUpdatedValue:(id)a0;
- (BOOL)mergeConstraints:(id)a0;

@end
