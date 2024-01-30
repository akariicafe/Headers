@interface CSConfig : NSObject

+ (double)inputRecordingBufferDuration;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (double)defaultContinousFingerprintBufferDurationForRemora;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (BOOL)inputRecordingIsFloat;
+ (float)inputRecordingDurationInSecs;
+ (float)inputRecordingDurationInSecsExtended;
+ (int)csAudioProcessingQueuePriority;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (double)defaultContinousFingerprintBufferDuration;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned long long)channelForOutputReference;
+ (unsigned int)audioConverterBitrate;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (float)daysBeforeRemovingLogFiles;
+ (float)remoteVADDuration;
+ (float)inputRecordingSampleRateNarrowBand;

@end
