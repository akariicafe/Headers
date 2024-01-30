@class UIButton, WFAudioRecorder, NSString;

@interface WFAudioRecorderViewController : WFAudioInputViewController <WFAudioRecorderDelegate>

@property (retain, nonatomic) WFAudioRecorder *audioRecorder;
@property (weak, nonatomic) UIButton *inputButton;
@property (nonatomic) BOOL isFinishing;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL startImmediately;
@property (nonatomic) double recordingDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRecording;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleTap;
- (void)finishRecording;
- (void)audioRecorder:(id)a0 didFinishWithDestinationURL:(id)a1 error:(id)a2;
- (void)audioRecorder:(id)a0 didProgressToTime:(double)a1;
- (id)initWithOutputFormat:(long long)a0 destinationURL:(id)a1;
- (void)inputButtonTapped;

@end
