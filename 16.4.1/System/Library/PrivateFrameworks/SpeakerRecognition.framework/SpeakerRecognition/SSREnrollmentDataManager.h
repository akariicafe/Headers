@interface SSREnrollmentDataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (BOOL)saveMetadata:(id)a0 isExplicitEnrollment:(BOOL)a1;
+ (void)saveRawUtteranceAndMetadata:(id)a0 to:(id)a1 isExplicitEnrollment:(BOOL)a2;
+ (BOOL)saveUtterance:(id)a0 utteranceAudioPath:(id)a1 numSamplesToWrite:(unsigned long long)a2 isExplicitEnrollment:(BOOL)a3;
+ (BOOL)saveUtteranceAndMetadata:(id)a0 atDirectory:(id)a1 isExplicitEnrollment:(BOOL)a2;
+ (BOOL)writeMetaDict:(id)a0 atMetaPath:(id)a1;

@end
