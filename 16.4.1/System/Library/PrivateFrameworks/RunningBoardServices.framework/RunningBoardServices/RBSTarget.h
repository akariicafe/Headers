@class RBSProcessIdentifier, NSString, RBSProcessIdentity, NSObject;
@protocol OS_xpc_object;

@interface RBSTarget : NSObject <RBSXPCSecureCoding, RBSProcessMatching, NSCopying>

@property (readonly, nonatomic, getter=isSystem) BOOL system;
@property (readonly, nonatomic) RBSProcessIdentifier *processIdentifier;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetWithProcessIdentifier:(id)a0;
+ (id)targetWithProcessIdentifier:(id)a0 environmentIdentifier:(id)a1;
+ (id)targetWithPid:(int)a0 environmentIdentifier:(id)a1;
+ (id)targetWithPid:(int)a0;
+ (id)systemTarget;
+ (id)currentProcess;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)targetWithProcessIdentity:(id)a0;
+ (id)targetWithEndpoint:(id)a0;
+ (id)targetWithProcessIdentity:(id)a0 environmentIdentifier:(id)a1;

- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithEuid:(unsigned int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
