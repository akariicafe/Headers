@interface SSREnrollmentDataManager : NSObject

+ (BOOL)saveMetadata:(id)a0 isExplicitEnrollment:(BOOL)a1;
+ (BOOL)saveUtterance:(id)a0 utteranceAudioPath:(id)a1 numSamplesToWrite:(unsigned long long)a2 isExplicitEnrollment:(BOOL)a3;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (BOOL)writeMetaDict:(id)a0 atMetaPath:(id)a1;
+ (void)saveRawUtteranceAndMetadata:(id)a0 to:(id)a1 isExplicitEnrollment:(BOOL)a2;
+ (BOOL)saveUtteranceAndMetadata:(id)a0 atDirectory:(id)a1 isExplicitEnrollment:(BOOL)a2;

@end
