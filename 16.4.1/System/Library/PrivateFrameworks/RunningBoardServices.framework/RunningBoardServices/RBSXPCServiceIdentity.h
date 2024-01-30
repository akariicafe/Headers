@class RBSXPCServiceDefinition, NSString, NSUUID, NSData, RBSProcessInstance;

@interface RBSXPCServiceIdentity : NSObject <RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSXPCServiceDefinition *definition;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) RBSProcessInstance *host;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *persona;
@property (readonly, copy, nonatomic) NSData *validationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithDefinition:(id)a0 sessionID:(id)a1 host:(id)a2 UUID:(id)a3 persona:(id)a4 validationToken:(id)a5;
+ (id)identityWithDefinition:(id)a0 sessionID:(id)a1 host:(id)a2 UUID:(id)a3;
+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
