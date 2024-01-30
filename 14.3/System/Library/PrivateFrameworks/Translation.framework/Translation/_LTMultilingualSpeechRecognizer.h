@class NSDictionary;

@interface _LTMultilingualSpeechRecognizer : NSObject {
    NSDictionary *_recognizers;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)endAudio;
- (id)initWithModelURLs:(id)a0 modelVersions:(id)a1;
- (void)cancelRecognition;
- (void)startRecognitionForLocale:(id)a0 autoEndpoint:(BOOL)a1 resultHandler:(id /* block */)a2;
- (void)addSpeechAudioData:(id)a0;

@end
