@interface CSConfig : NSObject

+ (unsigned int)inputRecordingNumberOfChannels;
+ (BOOL)inputRecordingIsFloat;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned long long)channelForOutputReference;
+ (float)inputRecordingSampleRate;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned int)audioConverterBitrate;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (int)csAudioProcessingQueuePriority;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (float)remoteVADDuration;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (double)defaultContinousFingerprintBufferDuration;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (double)inputRecordingBufferDuration;

@end
