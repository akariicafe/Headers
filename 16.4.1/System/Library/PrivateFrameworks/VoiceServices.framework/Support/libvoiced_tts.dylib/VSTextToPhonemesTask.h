@interface VSTextToPhonemesTask : VSSpeechSpeakTask

@property (nonatomic) long long phonemeSystem;
@property (copy, nonatomic) id /* block */ reply;

- (BOOL)isSpeaking;
- (void)main;
- (void).cxx_destruct;

@end
