@class NSSet, NSNumber;

@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadVoiceOver;
@property (copy, nonatomic) NSNumber *payloadZoom;
@property (copy, nonatomic) NSNumber *payloadInvertColors;
@property (copy, nonatomic) NSNumber *payloadAssistiveTouch;

+ (id)buildRequiredOnly;
+ (id)buildWithVoiceOver:(id)a0 withZoom:(id)a1 withInvertColors:(id)a2 withAssistiveTouch:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
