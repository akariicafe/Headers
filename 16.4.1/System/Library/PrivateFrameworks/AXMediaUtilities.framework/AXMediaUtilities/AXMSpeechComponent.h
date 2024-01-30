@class NSString, AVSpeechSynthesizer;

@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate>

@property (retain, nonatomic) AVSpeechSynthesizer *synthesizer;
@property (copy, nonatomic) id /* block */ currentRequestCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (BOOL)canHandleRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didContinueSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didPauseSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeechUtterance:(id)a1;
- (void)stopSpeakingAtNextWord;
- (void)stopSpeakingImmediately;

@end
