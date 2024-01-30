@class NSString, NSDateInterval, NSDate, HKSPPersistentStateMachine;

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPPersistentStateMachineEventHandler, HKSPDictionarySerializable, NSCoding, NSCopying>

@property (readonly, nonatomic) HKSPPersistentStateMachine *stateMachine;
@property (retain, nonatomic) NSDateInterval *lifetimeInterval;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, nonatomic) BOOL schedulesExpiration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasExpirationDate:(id)a0;
+ (BOOL)_isExpired:(id)a0 currentDate:(id)a1;
+ (id)infiniteInterval;

- (void)encodeWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)stateDidExpireWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isExpired;
- (id)initWithStateMachine:(id)a0;
- (BOOL)_willExitWithNextState:(id)a0 context:(id)a1;
- (void)_didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_didExitWithNextState:(id)a0 context:(id)a1;
- (void)_resetLifetimeInterval;
- (BOOL)_updateExpirationDate;
- (id)_updatedLifetimeIntervalWithStartDate:(id)a0;
- (BOOL)_willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)equalsBuilderWithObject:(id)a0;
- (void)stateWithIdentifierDidExpire:(id)a0;
- (void)updateStateWithContext:(id)a0;

@end
