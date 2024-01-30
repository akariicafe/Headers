@class SFSpeechRecognitionRequest, NSString, NSOperationQueue, NSError, AFDictationConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate> {
    AFDictationConnection *_dictationConnection;
    NSOperationQueue *_externalQueue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _completed;
    BOOL _running;
}

@property (readonly, nonatomic) long long _taskHint;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isFinishing) BOOL finishing;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transcriptionsWithTokens:(id)a0;
+ (id)recognizedResultFromPackage:(id)a0;

- (void)cancel;
- (void)finish;
- (void)addRecordedSpeechSampleData:(id)a0;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)a0;
- (void).cxx_destruct;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (float)peakPower;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)a0;
- (void)stopSpeech;
- (float)averagePower;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (id)_initWithRequest:(id)a0 queue:(id)a1 languageCode:(id)a2 taskHint:(long long)a3;

@end
