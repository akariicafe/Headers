@interface CSConfig : NSObject

+ (unsigned int)inputRecordingNumberOfChannels;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (double)inputRecordingBufferDuration;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned long long)channelForProcessedInput;
+ (float)remoteVADDuration;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (long long)inputRecordingEncoderAudioQuality;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)channelForOutputReference;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (int)csAudioProcessingQueuePriority;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned long long)serverLoggingChannelBitset;
+ (double)defaultContinousFingerprintBufferDuration;

@end
