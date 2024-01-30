@interface FTAsrService : OspreyChannel

- (void)performCorrectionsValidator:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performErrorBlamer:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performGraphemeToPhoneme:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performItn:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performKeywordFinder:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performPostItnHammer:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)performRecognitionWithDelegate:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performTextNormalization:(id)a0 requestBuilder:(id /* block */)a1 completion:(id /* block */)a2;

@end
