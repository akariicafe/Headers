@class NSSet, NSString, NSMutableDictionary, NSObject, RBSProcessHandle;
@protocol OS_xpc_object;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying> {
    unsigned long long _codedValues;
    NSMutableDictionary *_codedStateCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) unsigned char taskState;
@property (nonatomic) unsigned char debugState;
@property (nonatomic) unsigned char terminationResistance;
@property (copy, nonatomic) NSSet *endowmentNamespaces;
@property (copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSSet *legacyAssertions;
@property (copy, nonatomic) NSSet *primitiveAssertions;
@property (readonly, nonatomic, getter=isEmptyState) BOOL emptyState;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *codedState;
@property (readonly, nonatomic) RBSProcessHandle *process;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic, getter=isDebugging) BOOL debugging;
@property (readonly, nonatomic, getter=isPreventedFromLaunching) BOOL preventedFromLaunching;
@property (readonly, copy, nonatomic) NSSet *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)untrackedRunningStateforProcess:(id)a0;
+ (id)stateWithProcess:(id)a0;
+ (id)statesForPredicate:(id)a0 withDescriptor:(id)a1 service:(id)a2 error:(out id *)a3;
+ (void)setActiveStateDescriptor:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)statesForPredicate:(id)a0 withDescriptor:(id)a1 error:(out id *)a2;

- (id)initWithRBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDifferentFromState:(id)a0 significantly:(out BOOL *)a1;
- (void)encodeWithPreviousState:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
