@class RCPRecorderConfig;

@interface RCPEventStreamRecorder : RCPEventStream

@property (nonatomic) long long state;
@property (readonly, nonatomic) RCPRecorderConfig *config;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;

+ (id)recorderWithConfiguration:(id)a0;

- (void)stopRecording;
- (void)startRecording;
- (void)enqueueEvent:(id)a0;
- (void).cxx_destruct;

@end
