@class NSSet, NSString, NSNumber;

@interface CEMClassroomDeleteUserCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSNumber *payloadForceDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithIdentifier:(id)a0 withUserName:(id)a1 withForceDeletion:(id)a2;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withUserName:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (int)executionLevel;

@end
