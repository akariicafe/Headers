@class RBConcreteTarget, RBSAssertionIdentifier, NSString, NSArray, RBAssertionIntransientState, RBProcessState, NSSet, RBSystemState, RBProcess, RBAssertionTransientState, RBSProcessAssertionInfo, RBInheritanceCollection;

@interface RBAssertion : NSObject <RBStateCapturing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSystemState *_systemState;
    RBProcessState *_processState;
    RBAssertionTransientState *_transientState;
    unsigned long long _invalidationReason;
    unsigned long long _acquisitionCompletionPolicy;
    NSSet *_originatorInheritances;
    RBSProcessAssertionInfo *_assertionInfo;
    id _plugInHoldToken;
    BOOL _suspended;
    BOOL _active;
    BOOL _resolvedState;
}

@property (readonly, copy, nonatomic) RBConcreteTarget *target;
@property (readonly, nonatomic) RBProcess *originator;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, copy, nonatomic) RBAssertionIntransientState *intransientState;
@property (readonly, copy, nonatomic) RBProcessState *processState;
@property (readonly, nonatomic) unsigned long long startPolicy;
@property (readonly, nonatomic) unsigned long long endPolicy;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic, getter=isValid) BOOL invalid;
@property (readonly, nonatomic) BOOL suspendsOnOriginatorSuspension;
@property (readonly, nonatomic) BOOL invalidatesSynchronously;
@property (readonly, nonatomic) double invalidationDuration;
@property (readonly, nonatomic) double warningDuration;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) unsigned long long legacyReason;
@property (readonly, nonatomic) unsigned long long runningReason;
@property (readonly, nonatomic) BOOL definesRelativeStartTime;
@property (readonly, nonatomic) BOOL terminateTargetOnOriginatorExit;
@property (readonly, nonatomic) BOOL hasHereditaryGrant;
@property (readonly, nonatomic) BOOL hasDomainAttribute;
@property (readonly, nonatomic) NSSet *sourceEnvironments;
@property (nonatomic) unsigned long long invalidationReason;
@property (retain, nonatomic) id plugInHoldToken;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithIdentifier:(id)a0 target:(id)a1 explanation:(id)a2 attributes:(id)a3 originator:(id)a4 context:(id)a5;
+ (id)assertionWithDescriptor:(id)a0 target:(id)a1 originator:(id)a2 context:(id)a3;

- (void)applyToSystemState:(id)a0 withAttributeContext:(id)a1;
- (void).cxx_destruct;
- (id)captureState;
- (BOOL)resolveStateWithContext:(id)a0;
- (void)applyToAssertionTransientState:(id)a0 withAttributeContext:(id)a1;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)a0;
- (void)activate;
- (void)resume;
- (id)updateProcessStateWithAttributeContext:(id)a0;
- (void)applyToProcessState:(id)a0 withAttributeContext:(id)a1;
- (void)deactivate;
- (void)suspend;

@end
