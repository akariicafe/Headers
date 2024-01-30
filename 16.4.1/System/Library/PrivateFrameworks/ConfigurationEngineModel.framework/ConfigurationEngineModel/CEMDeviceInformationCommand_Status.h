@class NSSet, CEMDeviceInformationCommand_StatusQueryResponses, CEMDeviceInformationCommand_StatusErrorResponses;

@interface CEMDeviceInformationCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponses *statusQueryResponses;
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusErrorResponses *statusErrorResponses;

+ (id)buildRequiredOnlyWithQueryResponses:(id)a0;
+ (id)buildWithQueryResponses:(id)a0 withErrorResponses:(id)a1;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
