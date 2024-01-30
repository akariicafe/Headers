@class NSSet, NSString, RMModelManagementOrganizationInformationDeclaration_Proof;

@interface RMModelManagementOrganizationInformationDeclaration : RMModelManagementBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadEmail;
@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) RMModelManagementOrganizationInformationDeclaration_Proof *payloadProof;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 name:(id)a1;
+ (id)buildWithIdentifier:(id)a0 name:(id)a1 email:(id)a2 URL:(id)a3 proof:(id)a4;

@end
