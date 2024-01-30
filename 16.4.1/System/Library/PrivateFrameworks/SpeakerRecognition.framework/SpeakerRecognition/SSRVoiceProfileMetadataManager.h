@interface SSRVoiceProfileMetadataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (void)_writeMetaDict:(id)a0 forUtterancePath:(id)a1;
+ (BOOL)isUtteranceImplicitlyTrained:(id)a0;
+ (id)recordedTimeStampOfFile:(id)a0;
+ (id)getUtteranceEnrollmentType:(id)a0;
+ (id)recordedTimeStampFromFileName:(id)a0;
+ (void)saveUtteranceMetadataForUtterance:(id)a0 enrollmentType:(id)a1 isHandheldEnrollment:(BOOL)a2 triggerSource:(id)a3 audioInput:(id)a4 otherBiometricResult:(unsigned long long)a5 containsPayload:(BOOL)a6;

@end
