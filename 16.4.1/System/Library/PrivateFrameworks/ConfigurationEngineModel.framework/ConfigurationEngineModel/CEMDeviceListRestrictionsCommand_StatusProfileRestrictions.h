@class NSSet, NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusProfileRestrictions : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSDictionary *statusANY;

+ (id)build;
+ (id)buildRequiredOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
