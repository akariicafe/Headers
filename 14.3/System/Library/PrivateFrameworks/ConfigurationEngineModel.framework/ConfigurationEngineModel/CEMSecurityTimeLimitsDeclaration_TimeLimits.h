@class NSSet, CEMSecurityTimeLimitsDeclaration_Allowance;

@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayAllowance;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayCurfew;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendAllowance;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendCurfew;

+ (id)buildRequiredOnly;
+ (id)buildWithWeekdayAllowance:(id)a0 withWeekdayCurfew:(id)a1 withWeekendAllowance:(id)a2 withWeekendCurfew:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
