@class NSMutableDictionary, VSSpeechSynthesizer, AVAudioSession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ANSpeechUtil : NSObject <VSSpeechSynthesizerDelegate>

@property (retain, nonatomic) VSSpeechSynthesizer *synthesizer;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *requests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUtil;
+ (id)_pcmAudioDataFromOpusAudio:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 withInstrumentMetrics:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSynthesisRequest:(id)a1 withInstrumentMetrics:(id)a2 error:(id)a3;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 withSynthesisRequest:(id)a1 didGenerateAudioChunk:(id)a2;
- (void)speakText:(id)a0;
- (id)_fileNameGeneratorWithFileExtension:(id)a0;
- (void)_handleCompletedSpeechRequest:(id)a0 error:(id)a1;
- (void)synthesizeSpeechToFileFromText:(id)a0 completionHandler:(id /* block */)a1;

@end
