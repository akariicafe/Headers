@class NSString, NSURL, CKVoiceController, NSDate;
@protocol CKAudioRecorderDelegate;

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate>

@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic, getter=isRecordingEmpty) BOOL recordingEmpty;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) CKVoiceController *voiceController;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSDate *startDate;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL shouldPlayStartSound;
@property (nonatomic) BOOL shouldPlayStopSound;
@property (nonatomic) struct OpaqueAudioFileID { } *fileID;
@property (nonatomic) long long totalPacketsCount;
@property (weak, nonatomic) id<CKAudioRecorderDelegate> delegate;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidEnterBackground:(id)a0;
- (void)stopRecording:(id /* block */)a0;
- (void)cancelRecording;
- (void)startRecordingAndPlaySound:(BOOL)a0;
- (void)stopRecordingAndPlaySound:(BOOL)a0 completion:(id /* block */)a1;
- (void)startRecordingForRaiseGesture;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetState;
- (void)voiceControllerDidDetectStartpoint:(id)a0;
- (void)voiceControllerDidStartRecording:(id)a0;
- (void)voiceControllerRecordBufferAvailable:(id)a0 buffer:(id)a1;
- (void)voiceControllerDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (void)voiceController:(id)a0 didUpdateAveragePower:(float)a1;
- (void)startRecordingForRaiseGesture:(BOOL)a0 shouldPlaySound:(BOOL)a1;

@end
