@class RBSProcessIdentifier, NSString, RBSProcessIdentity;

@interface RBSTarget : NSObject <RBSXPCSecureCoding, RBSProcessMatching, NSCopying>

@property (readonly, nonatomic, getter=isSystem) BOOL system;
@property (readonly, nonatomic) RBSProcessIdentifier *processIdentifier;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)targetWithProcessIdentity:(id)a0 environmentIdentifier:(id)a1;
+ (id)targetWithProcessIdentifier:(id)a0;
+ (id)currentProcess;
+ (id)systemTarget;
+ (id)targetWithProcessIdentity:(id)a0;
+ (id)targetWithProcessIdentifier:(id)a0 environmentIdentifier:(id)a1;
+ (id)targetWithPid:(int)a0 environmentIdentifier:(id)a1;
+ (id)targetWithPid:(int)a0;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithEuid:(unsigned int)a0;

@end
