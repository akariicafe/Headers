@class NSString, FTRecognitionSausage;

@interface FTMutableSiriPayloadTranslationInfo : FTSiriPayloadTranslationInfo

@property (copy, nonatomic) NSString *pre_itn_payload;
@property (copy, nonatomic) NSString *post_itn_payload;
@property (copy, nonatomic) FTRecognitionSausage *pre_sausage_payload;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
