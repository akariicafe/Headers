@class SRCSCommandRecognizer, SRCSCommandRecognitionSystem;

@interface UIDictationCommandHandler : NSObject

@property (retain, nonatomic) SRCSCommandRecognitionSystem *cmdRecSystem;
@property (retain, nonatomic) SRCSCommandRecognizer *cmdRecognizer;

- (void).cxx_destruct;
- (void)recognizeCommandWithPhrases:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerCommandIdentifiers:(id)a0 locale:(id)a1;

@end
