@interface FTTtsService : OspreyChannel

- (void)performTextToSpeech:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performTextToSpeechSpeechFeature:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performTextToSpeechStreamingWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;

@end
