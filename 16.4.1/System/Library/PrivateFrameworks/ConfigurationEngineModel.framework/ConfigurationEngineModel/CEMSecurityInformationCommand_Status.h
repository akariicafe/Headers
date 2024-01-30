@class NSSet, CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfo *statusSecurityInfo;

+ (id)buildRequiredOnlyWithSecurityInfo:(id)a0;
+ (id)buildWithSecurityInfo:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
