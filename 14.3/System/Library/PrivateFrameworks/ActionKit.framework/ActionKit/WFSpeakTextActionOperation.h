@class AVSpeechSynthesizer, NSString, NSProgress, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WFSpeakTextActionOperation : NSObject <WFActionExtendedOperation, AVSpeechSynthesizerDelegate>

@property (weak, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) AVSpeechSynthesizer *synthesizer;
@property (readonly, nonatomic) NSMutableArray *completionHandlers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;
- (void)callCompletionHandlers;
- (void)addCompletionHandlerIfRunning:(id /* block */)a0;
- (void)speakTextUsingSynthesizer:(id)a0 voice:(id)a1 rate:(float)a2 pitch:(float)a3;
- (void)cleanupSpeechSynthesizer;

@end
