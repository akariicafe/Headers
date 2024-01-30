@class NSString, NSTimer, NSURL, AVAudioRecorder;
@protocol WFAudioRecorderDelegate;

@interface WFAudioRecorder : NSObject <AVAudioRecorderDelegate>

@property (nonatomic) long long outputFormat;
@property (nonatomic) double recordingDuration;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) AVAudioRecorder *recorder;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (nonatomic) BOOL runningUpdateTimer;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL hasFinished;
@property (weak, nonatomic) id<WFAudioRecorderDelegate> delegate;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formattedStringWithDuration:(double)a0 elapsedTime:(double)a1;

- (void)pauseRecording;
- (void)startRecording;
- (void)resumeRecording;
- (void).cxx_destruct;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (void)recordForDuration:(double)a0;
- (void)finishRecording;
- (void)audioRecorderEncodeErrorDidOccur:(id)a0 error:(id)a1;
- (id)initWithOutputFormat:(long long)a0 destinationURL:(id)a1;
- (void)audioInterruption:(id)a0;
- (void)countdownFire:(id)a0;

@end
