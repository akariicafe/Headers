@class NSString, QSSRecognitionSausage;

@interface QSSMutableSiriPayloadTranslationInfo : QSSSiriPayloadTranslationInfo

@property (copy, nonatomic) NSString *pre_itn_payload;
@property (copy, nonatomic) NSString *post_itn_payload;
@property (copy, nonatomic) QSSRecognitionSausage *pre_sausage_payload;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
