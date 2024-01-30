@class NSSet, NSString, NSNumber;

@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadFrequency;
@property (copy, nonatomic) NSString *payloadLocalTime;
@property (copy, nonatomic) NSNumber *payloadSpread;
@property (copy, nonatomic) NSNumber *payloadDay;

+ (id)buildRequiredOnlyWithFrequency:(id)a0;
+ (id)buildWithFrequency:(id)a0 withLocalTime:(id)a1 withSpread:(id)a2 withDay:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
