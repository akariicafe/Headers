@class NSSet, NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSNumber *statusPasswordExists;
@property (copy, nonatomic) NSNumber *statusChangePending;
@property (copy, nonatomic) NSNumber *statusAllowOroms;

+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:(id)a0 withChangePending:(id)a1 withAllowOroms:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
