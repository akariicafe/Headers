@class NSString, RBSProcessPredicateImpl, RBSProcessIdentity;

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching>

@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionPoint;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) RBSProcessPredicateImpl *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateMatchingHandle:(id)a0;
+ (id)predicateMatchingPlatform:(int)a0;
+ (id)predicate;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)predicateMatchingLaunchServicesProcesses;
+ (id)predicateMatchingSuspendableProcesses;
+ (id)predicateMatching:(id)a0;
+ (id)predicateMatchingPredicates:(id)a0;
+ (id)predicateMatchingBundleIdentifier:(id)a0;
+ (id)predicatePowerLogProcesses;
+ (id)predicateMatchingEuid:(unsigned int)a0;
+ (id)predicateMatchingServiceName:(id)a0;
+ (id)predicateMatchingExtensionPoint:(id)a0;
+ (id)predicateMatchingIdentity:(id)a0;
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)a0;
+ (id)predicateMatchingIdentifier:(id)a0;
+ (id)predicateMatchingJobLabel:(id)a0;
+ (id)predicateMatchingTarget:(id)a0;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithPredicate:(id)a0;

@end
