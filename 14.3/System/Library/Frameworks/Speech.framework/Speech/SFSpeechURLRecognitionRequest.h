@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest

@property (readonly, copy, nonatomic) NSURL *URL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;

@end
