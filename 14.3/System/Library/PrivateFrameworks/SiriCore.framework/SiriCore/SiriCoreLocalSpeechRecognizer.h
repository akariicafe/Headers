@class NSString, NSXPCConnection, NSData, NSError, NSObject;
@protocol SiriCoreLocalSpeechRecognizerDelegate, OS_dispatch_queue;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate> {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    BOOL _hasRecognizedAnything;
    unsigned char _instanceUUID[16];
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
}

@property (readonly, weak, nonatomic) id<SiriCoreLocalSpeechRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profilePathForLanguage:(id)a0 errorOut:(id *)a1;
+ (void)resetCacheAndCompileAllAssets;
+ (id)installedAssetSizeWithError:(id *)a0;
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)a0;
+ (id)purgeInstalledAssetsExceptLanguages:(id)a0 error:(id *)a1;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)a0 errorOut:(id *)a1;
+ (id)offlineDictationStatusIgnoringCache:(BOOL)a0 error:(id *)a1;

- (void)getOfflineDictationStatusWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)finishAudio;
- (void)preheatSpeechRecognitionWithLanguage:(id)a0 modelOverrideURL:(id)a1;
- (void)createSpeechProfileWithLanguage:(id)a0 modelOverridePath:(id)a1 JSONData:(id)a2 completion:(id /* block */)a3;
- (void)removePersonalizedLMForFidesOnly:(BOOL)a0;
- (void)updateSpeechProfileWithLanguage:(id)a0 modelOverridePath:(id)a1 completion:(id /* block */)a2;
- (id)_service;
- (id)_serviceWithFunctionName:(id)a0 errorHandler:(id /* block */)a1;
- (void)fetchUserDataForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)addAudioPacket:(id)a0;
- (void)readProfileAndUserDataWithLanguage:(id)a0 allowOverride:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeDESRecord;
- (void)runAdaptationRecipeEvaluation:(id)a0 recordData:(id)a1 attachments:(id)a2 completion:(id /* block */)a3;
- (id)_synchronousServiceWithErrorHandler:(id /* block */)a0;
- (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
- (void)fetchAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (id)_connection;
- (oneway void)speechServiceDidRecognizeTokens:(id)a0;
- (void)runEvaluationWithDESRecordDatas:(id)a0 language:(id)a1 recipe:(id)a2 fidesPersonalizedLMPath:(id)a3 fidesPersonalizedLMTrainingAsset:(id)a4 scrubResult:(BOOL)a5 completion:(id /* block */)a6;
- (id)initWithDelegate:(id)a0 instanceUUID:(unsigned char[16])a1;
- (unsigned char[16] *)instanceUUID;
- (void)deleteAllDESRecordsForDictationPersonalization;
- (oneway void)speechServiceDidProcessAudioDuration:(double)a0;
- (void)invalidatePersonalizedLM;
- (void)getOfflineDictationStatusIgnoringCache:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)_newConnection;
- (void)startSpeechRecognitionWithLanguage:(id)a0 interactionIdentifier:(id)a1 task:(id)a2 context:(id)a3 narrowband:(BOOL)a4 detectUtterances:(BOOL)a5 maximumRecognitionDuration:(double)a6 farField:(BOOL)a7 secureOfflineOnly:(BOOL)a8 censorSpeech:(BOOL)a9 originalAudioFileURL:(id)a10 overrides:(id)a11 modelOverrideURL:(id)a12 applicationName:(id)a13 shouldStoreAudioOnDevice:(BOOL)a14 didStartHandler:(id /* block */)a15;
- (void)resetDESWithCompletion:(id /* block */)a0;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)a0 error:(id)a1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)a0;
- (void)invalidate;
- (oneway void)speechServiceDidRecognizePackage:(id)a0;

@end
