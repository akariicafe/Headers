@class NSSet, NSString, NSDictionary, NSArray;

@interface DMTWiFiPayload : DMTConfigurationPayloadBase <DMTConfigurationPayload>

@property (class, readonly, nonatomic) NSSet *supportedPayloadTypes;

@property (readonly, nonatomic) BOOL autoJoin;
@property (readonly, nonatomic) NSString *encryptionType;
@property (readonly, nonatomic) NSString *ssid;
@property (readonly, nonatomic) NSDictionary *eapClientConfiguration;
@property (readonly, nonatomic) NSArray *acceptEAPTypes;
@property (readonly, nonatomic) NSArray *certificateAnchorUUID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
