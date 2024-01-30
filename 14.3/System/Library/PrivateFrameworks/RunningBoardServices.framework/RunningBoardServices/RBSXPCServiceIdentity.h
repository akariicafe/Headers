@class RBSXPCServiceDefinition, NSString, NSUUID, RBSProcessInstance;

@interface RBSXPCServiceIdentity : NSObject <RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSXPCServiceDefinition *definition;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) RBSProcessInstance *host;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)identityWithDefinition:(id)a0 sessionID:(id)a1 host:(id)a2 UUID:(id)a3;

- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
