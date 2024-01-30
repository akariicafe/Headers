@interface SNUtils : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isRunningInDaemon;
+ (int)modelSampleRate:(id)a0 orDefaultRate:(int)a1;
+ (int)modelBlockSize:(id)a0;
+ (id)vggishFeatureEmbeddingInputShape;
+ (int)numberOfElements:(id)a0;
+ (id)vggishFeatureEmbeddingOutputShape;
+ (id)vggishFrontEndProcessingModelDescription;
+ (id)userSuppliedInputFeatureNames:(id)a0;
+ (id)userSuppliedOutputFeatureNames:(id)a0;
+ (id)feedbackConnections:(id)a0;
+ (id)valueForEntitlement:(id)a0 error:(id *)a1;
+ (int)modelOutputBlockSize:(id)a0;
+ (BOOL)isFormatPCM:(id)a0;
+ (id)splitBuffer:(id)a0 intoBuffersWithFrameCount:(unsigned int)a1;
+ (long long)audioFileFrameCount:(id)a0;
+ (long long)detectionCountInResults:(id)a0;
+ (id)vggishFrontEndProcessingInputShape;
+ (id)vggishFrontEndProcessingOutputShape;
+ (id)parseFeedbackConnectionsString:(id)a0;
+ (id)userSuppliedFeatureNames:(id)a0 direction:(long long)a1;
+ (id)subtractSet:(id)a0 from:(id)a1;
+ (void)_deleteWAVAndTextFilesInDirectory:(id)a0 createdBeforeDate:(id)a1 withRemainingDirectoryByteSizeLessThan:(long long)a2;
+ (id)fileCreationDate:(id)a0;
+ (id)diskSpaceRemainingBytesContainingDirectory:(id)a0;
+ (id)fileSizeBytes:(id)a0;
+ (id)valueForEntitlement:(id)a0 fromTask:(struct __SecTask { } *)a1 error:(id *)a2;
+ (void)silenceUnfilledFramesInBuffer:(id)a0;
+ (void)copyAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 to:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 frameCount:(unsigned int)a2 bytesPerFrame:(unsigned int)a3;
+ (int)modelInputBlockSize:(id)a0;
+ (id)loggingPrefixForRequest:(id)a0;
+ (void)deleteWAVAndTextFilesInDirectory:(id)a0 createdBeforeDate:(id)a1 withRemainingDirectoryByteSizeLessThan:(long long)a2;

@end
