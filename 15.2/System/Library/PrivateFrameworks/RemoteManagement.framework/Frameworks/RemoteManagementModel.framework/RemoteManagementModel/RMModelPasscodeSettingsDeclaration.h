@class NSSet, NSString, NSNumber;

@interface RMModelPasscodeSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadRequirePasscode;
@property (copy, nonatomic) NSNumber *payloadRequireComplexPasscode;
@property (copy, nonatomic) NSNumber *payloadMinimumLength;
@property (copy, nonatomic) NSNumber *payloadMaximumFailedAttempts;
@property (copy, nonatomic) NSNumber *payloadMaximumGracePeriodInMinutes;
@property (copy, nonatomic) NSNumber *payloadMaximumInactivityInMinutes;
@property (copy, nonatomic) NSNumber *payloadPasscodeReuseLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 requirePasscode:(id)a1 requireComplexPasscode:(id)a2 minimumLength:(id)a3 maximumFailedAttempts:(id)a4 maximumGracePeriodInMinutes:(id)a5 maximumInactivityInMinutes:(id)a6 passcodeReuseLimit:(id)a7;

- (id)assetReferences;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
