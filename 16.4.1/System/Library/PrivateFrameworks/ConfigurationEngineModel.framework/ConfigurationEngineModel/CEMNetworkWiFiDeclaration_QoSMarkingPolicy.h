@class NSSet, NSArray, NSNumber;

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers;
@property (copy, nonatomic) NSNumber *payloadQoSMarkingAppleAudioVideoCalls;
@property (copy, nonatomic) NSNumber *payloadQoSMarkingEnabled;

+ (id)buildRequiredOnly;
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)a0 withQoSMarkingAppleAudioVideoCalls:(id)a1 withQoSMarkingEnabled:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
