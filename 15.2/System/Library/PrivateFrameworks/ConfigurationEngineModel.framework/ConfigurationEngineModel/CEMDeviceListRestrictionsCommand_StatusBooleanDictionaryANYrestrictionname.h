@class NSSet, NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSNumber *statusValue;

+ (id)buildWithValue:(id)a0;
+ (id)buildRequiredOnlyWithValue:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
