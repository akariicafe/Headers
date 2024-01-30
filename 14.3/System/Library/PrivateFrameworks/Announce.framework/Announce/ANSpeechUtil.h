@class AVAudioSession, VSSpeechSynthesizer;

@interface ANSpeechUtil : NSObject

@property (retain, nonatomic) VSSpeechSynthesizer *synthesizer;
@property (retain, nonatomic) AVAudioSession *audioSession;

+ (id)sharedUtil;

- (void).cxx_destruct;
- (void)speakText:(id)a0;

@end
