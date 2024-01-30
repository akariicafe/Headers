@class NSString, NSObject;
@protocol OS_dispatch_queue, CSADCompanionServiceProvider;

@interface CSP2PService : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *lastCommunicatedPeer;
@property (retain, nonatomic) NSString *voiceTriggerBatchId;
@property (retain, nonatomic) NSString *voiceIdentificationBatchId;
@property (weak, nonatomic) id<CSADCompanionServiceProvider> adCompanionServiceProvider;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)sendCoreSpeechGradingDataToNearbyPeer;
- (void)sendVTNearMissGradingDataToCompanion;
- (void)_processRemoteHeySiriCommandWithRequest:(id)a0 fromSenderID:(id)a1 withReply:(id /* block */)a2;
- (void)_processParallelRecordingCommandWithRequest:(id)a0 fromSenderID:(id)a1 withReply:(id /* block */)a2;
- (void)_receiveParallelRecordingFromPeerId:(id)a0 recordingInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_receiveVoiceProfileFromPeerId:(id)a0 voiceProfileInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_processGradingDataFetchCommandWithRequest:(id)a0 fromSenderID:(id)a1 withReply:(id /* block */)a2;
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)a0 fromSenderID:(id)a1 withReply:(id /* block */)a2;
- (void)_receiveVoiceGradingDataFromPeerId:(id)a0 requestInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)a0 requestInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)a0 requestInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)a0 requestInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)a0 requestInfo:(id)a1 withReply:(id /* block */)a2;
- (void)_sendCoreSpeechGradingDataToPeerId:(id)a0;
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)a0;
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)a0 forLocale:(id)a1;
- (void)_sendGradingData:(id)a0 withFileName:(id)a1 toPeerId:(id)a2 withCompressedFlag:(BOOL)a3 withUncompressedDataSize:(unsigned long long)a4 withBatchId:(id)a5 withRetainFileFlag:(BOOL)a6;
- (void)_compressFilesInDirectory:(id)a0 matchingPredicate:(id)a1 compressedFileAvailable:(id /* block */)a2;
- (id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)a0 locale:(id)a1;
- (id)_spIdSiriDebugGradingDataRootDirectory;
- (void)_createDirectoryIfDoesNotExist:(id)a0;
- (id)_getContentsOfDirectory:(id)a0;
- (void)_getHomeUserIdForSharedSiriId:(id)a0 withCompletion:(id /* block */)a1;
- (void)_sendVoiceProfile:(id)a0 toPeerId:(id)a1;
- (id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)a0 locale:(id)a1;
- (id)_spIdSiriDebugVTDataDirectory;
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectory;
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)a0;
- (void)processRemoteCommandWithPayload:(id)a0 fromPeer:(id)a1 withReply:(id /* block */)a2;
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)a0;
- (id)_speakerRecognitionAudioLogsGradingDir;
- (id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)a0;

@end
