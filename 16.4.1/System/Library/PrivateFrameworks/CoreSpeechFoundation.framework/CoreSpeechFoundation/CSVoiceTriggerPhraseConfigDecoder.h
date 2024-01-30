@interface CSVoiceTriggerPhraseConfigDecoder : NSObject

+ (float)adjustTwoShotDelay:(float)a0;
+ (id)decodeConfigFrom:(id)a0 category:(id)a1;
+ (id)decodeConfigV1:(id)a0 category:(id)a1;
+ (id)decodeConfigV2:(id)a0 category:(id)a1;
+ (float)defaultTwoShotDelay;
+ (id)twoShotDelayConfigKey;

@end
