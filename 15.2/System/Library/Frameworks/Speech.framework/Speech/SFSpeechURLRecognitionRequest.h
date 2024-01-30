@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest

@property (readonly, copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_startedLocalConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (void)_handlePreRecordedAudioWithAsset:(id)a0 audioTracks:(id)a1 narrowband:(BOOL)a2 addSpeechDataBlock:(id /* block */)a3 stopSpeechBlock:(id /* block */)a4 cancelSpeechWithErrorBlock:(id /* block */)a5;

@end
