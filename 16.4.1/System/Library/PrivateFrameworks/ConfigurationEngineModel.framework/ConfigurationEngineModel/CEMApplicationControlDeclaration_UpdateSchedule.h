@class NSSet, NSString, NSNumber;

@interface CEMApplicationControlDeclaration_UpdateSchedule : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadMode;
@property (copy, nonatomic) NSNumber *payloadDuration;
@property (copy, nonatomic) NSString *payloadStartTime;
@property (copy, nonatomic) NSString *payloadEndTime;

+ (id)buildRequiredOnlyWithMode:(id)a0;
+ (id)buildWithMode:(id)a0 withDuration:(id)a1 withStartTime:(id)a2 withEndTime:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
