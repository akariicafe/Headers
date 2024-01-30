@class RBSProcessPredicate, NSString, RBSTerminateContext;
@protocol RBSServiceLocalProtocol;

@interface RBSTerminateRequest : RBSRequest <RBSXPCSecureCoding, NSCopying> {
    id<RBSServiceLocalProtocol> _service;
}

@property (readonly, nonatomic) BOOL targetsAllManagedProcesses;
@property (retain, nonatomic) RBSProcessPredicate *predicate;
@property (retain, nonatomic) RBSProcessPredicate *allow;
@property (readonly, nonatomic) RBSTerminateContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initForAllManagedWithReason:(id)a0 service:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initForAllManagedWithReason:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProcessIdentifier:(id)a0 context:(id)a1;
- (BOOL)execute:(out id *)a0 error:(out id *)a1;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)execute:(out id *)a0;
- (id)initWithProcessIdentity:(id)a0 context:(id)a1;
- (id)initWithPredicate:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
