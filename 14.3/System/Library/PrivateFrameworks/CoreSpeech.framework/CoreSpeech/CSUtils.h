@interface CSUtils : NSObject

+ (double)systemUpTime;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)deviceProductType;
+ (id)deviceBuildVersion;
+ (id)deviceProductVersion;
+ (BOOL)supportPremiumAssets;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })opusASBD;
+ (BOOL)supportTTS;
+ (float)hostTimeToSeconds:(unsigned long long)a0;
+ (id)getSiriLanguageWithFallback:(id)a0;
+ (void)applyNegative12dBGain:(id)a0;
+ (unsigned long long)secondsToHostTime:(float)a0;
+ (BOOL)shouldDeinterleaveAudioOnCS;
+ (unsigned int)getNumElementInBitset:(unsigned long long)a0;
+ (id)deviceHwRevision;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmNonInterleavedASBDWithSampleRate:(float)a0 numberOfChannels:(unsigned int)a1;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmInterleavedASBDWithSampleRate:(float)a0 numberOfChannels:(unsigned int)a1;
+ (void)removeLogFilesInDirectory:(id)a0 matchingPattern:(id)a1 beforeDays:(float)a2;
+ (void)clearLogFilesInDirectory:(id)a0 matchingPattern:(id)a1 exceedNumber:(unsigned long long)a2;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })utteranceFileASBD;
+ (id)_sharedDisposeLoggingQueue;
+ (void)URLsInDirectory:(id)a0 matchingPattern:(id)a1 completion:(id /* block */)a2;
+ (void)_sortedURLsInDirectory:(id)a0 matchingPattern:(id)a1 completion:(id /* block */)a2;
+ (id)_contentsOfDirectoryAtURL:(id)a0 matchingPattern:(id)a1 includingPropertiesForKeys:(id)a2 error:(id *)a3;
+ (BOOL)supportZeroFilter;
+ (BOOL)supportBeepCanceller;
+ (id)assetHashInResourcePath:(id)a0;
+ (BOOL)supportCSTwoShotDecision;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmNarrowBandASBD;
+ (BOOL)supportLanguageDetector;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmNonInterleavedWithRemoteVADASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmInterleavedWithRemoteVADASBD;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)a0;
+ (BOOL)isRecordContextVoiceTrigger:(id)a0;
+ (void)applyGain:(float)a0 toBuffer:(id)a1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)a0;
+ (void)apply12dBGain:(id)a0;
+ (void)iterateBitset:(unsigned long long)a0 block:(id /* block */)a1;
+ (BOOL)shouldRunVTOnCS;
+ (BOOL)isIOSDeviceSupportingBargeIn;
+ (BOOL)supportHearstVoiceTrigger;
+ (BOOL)supportRemoraVoiceTrigger;
+ (BOOL)supportJarvisVoiceTrigger;
+ (BOOL)supportBluetoothDeviceVoiceTrigger;
+ (BOOL)supportSmartVolume;
+ (BOOL)supportsVoiceTriggerFides;
+ (BOOL)supportSelfTriggerSuppression;
+ (BOOL)supportHybridEndpointer;
+ (BOOL)supportAdBlocker;
+ (BOOL)supportsSpeakerRecognitionAssets;
+ (BOOL)supportPhatic;
+ (BOOL)supportContinuousVoiceTrigger;
+ (BOOL)supportLazySessionActivation;
+ (BOOL)supportSessionActivateDelay;
+ (double)hostTimeToTimeInterval:(unsigned long long)a0;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmInt16ASBD;
+ (BOOL)supportOpportunisticZLL;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmMonoNonInterleavedWithRemoteVADASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmMonoInterleavedWithRemoteVADASBD;
+ (BOOL)shouldDelayPhaticForMyriadDecision;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)a0 anchorHostTime:(unsigned long long)a1 anchorSampleCount:(unsigned long long)a2;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)a0 anchorHostTime:(unsigned long long)a1 anchorSampleCount:(unsigned long long)a2;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmInterleavedASBD;
+ (BOOL)supportCompactPlus;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })speexASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })lpcmFloatASBD;
+ (BOOL)hasRemoteBuiltInMic;
+ (id)alertMuteBehaviorDict;
+ (id)voiceTriggerRecordContext;
+ (id)hearstVoiceTriggerRecordContext:(id)a0;
+ (id)jarvisVoiceTriggerRecordContext:(id)a0;
+ (id)lpcmRecordSettings;
+ (id)opusRecordSettings;
+ (id)speexRecordSettings;
+ (id)alertMuteSettings;
+ (BOOL)supportHandsFree;
+ (double)getHostClockFrequency;
+ (BOOL)supportRaiseToSpeak;
+ (BOOL)supportPremiumWatchAssets;
+ (id)rootQueueWithFixedPriority:(int)a0;
+ (BOOL)supportKeywordDetector;
+ (BOOL)supportSAT;
+ (BOOL)supportContinuousAudioFingerprint;
+ (BOOL)supportPremiumModel;
+ (BOOL)shouldDownloadVTAssetsOnDaemon;
+ (BOOL)hasRemoteCoreSpeech;
+ (BOOL)supportCircularBuffer;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)a0 fixedPriority:(int)a1;
+ (id)deviceUserAssignedName;
+ (id)timeStampWithSaltGrain;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })opusNarrowBandASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })aiffFileASBD;
+ (BOOL)readAudioChunksFrom:(id)a0 block:(id /* block */)a1;
+ (BOOL)isRecordContextHearstVoiceTrigger:(id)a0;
+ (BOOL)isRecordContextJarvisVoiceTrigger:(id)a0;
+ (BOOL)isRecordContextJarvisButtonPress:(id)a0;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)a0;
+ (BOOL)isRecordContextRaiseToSpeak:(id)a0;
+ (BOOL)xpcConnection:(id)a0 hasEntitlement:(id)a1;
+ (unsigned long long)getAssetTypeForNamespace:(id)a0;
+ (void)getTrialIdsForAssetType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
+ (BOOL)isRecordContextHearstDoubleTap:(id)a0;
+ (BOOL)isRecordContextAutoPrompt:(id)a0;
+ (BOOL)isRecordContextHomeButtonPress:(id)a0;
+ (BOOL)isRecordContextSpeakerIdTrainingTrigger:(id)a0;
+ (id)recordContextString:(id)a0;

@end
