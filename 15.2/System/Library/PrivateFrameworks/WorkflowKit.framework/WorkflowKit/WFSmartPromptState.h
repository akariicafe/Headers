@class WFContentAttribution, NSString, WFContentDestination;

@interface WFSmartPromptState : NSObject <WFSerializableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFContentAttribution *sourceContentAttribution;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) WFContentDestination *contentDestination;
@property (readonly, nonatomic) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)stateFromDatabaseData:(id)a0;
+ (id)localizedDeniedPermissionsErrorWithContentDestination:(id)a0;
+ (id)localizedUnsupportedEnvironmentError;

- (BOOL)matches:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)localizedExfiltrationRestrictedError;
- (id)databaseDataWithError:(id *)a0;
- (id)siriActionToolDescription;
- (id)initWithMode:(id)a0 sourceContentAttribution:(id)a1 actionUUID:(id)a2 contentDestination:(id)a3 status:(id)a4;
- (id)stateWithStatus:(id)a0;
- (id)stateWithStatus:(id)a0 actionUUID:(id)a1;
- (id)localizedDeniedPermissionsError;
- (BOOL)matches:(id)a0 ignoringAccountData:(BOOL)a1;
- (id)stateByReplacingAccountWithAppOrigin;

@end
