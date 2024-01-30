@class RBSProcessIdentifier, NSString, RBSProcessIdentity;

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSProcessIdentifier *identifier;
@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)instanceWithIdentifier:(id)a0 identity:(id)a1;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)rbs_pid;

@end
