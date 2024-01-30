@class NSString, NSDateInterval, NSDate, HKSPPersistentStateMachine;

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPDictionarySerializable, NSCoding, NSCopying>

@property (readonly, nonatomic) HKSPPersistentStateMachine *stateMachine;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (copy, nonatomic) NSDateInterval *lifetimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infiniteInterval;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)willExitWithNextState:(id)a0 context:(id)a1;
- (id)initWithStateMachine:(id)a0;
- (id)equalsBuilderWithObject:(id)a0;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)initWithStateMachine:(id)a0 lifetimeInterval:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)updateLifetimeIntervalForCurrentDate:(id)a0 expirationBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isExpiredForDate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
