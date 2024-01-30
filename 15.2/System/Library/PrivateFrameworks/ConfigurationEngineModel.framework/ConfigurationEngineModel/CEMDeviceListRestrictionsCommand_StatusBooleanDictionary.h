@class NSSet, NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionary : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSDictionary *statusANY;

+ (id)build;
+ (id)buildRequiredOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
