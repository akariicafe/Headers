@class NSString, QSSServerEndpointFeatures;

@interface QSSMutableSpeechTranslationServerEndpointFeatures : QSSSpeechTranslationServerEndpointFeatures

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *source_locale;
@property (copy, nonatomic) QSSServerEndpointFeatures *server_endpoint_features;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
