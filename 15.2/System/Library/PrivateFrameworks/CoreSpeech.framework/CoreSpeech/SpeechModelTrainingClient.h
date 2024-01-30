@class NSXPCConnection;

@interface SpeechModelTrainingClient : NSObject {
    NSXPCConnection *_smtConnection;
}

+ (void)initialize;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_serviceProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void)dealloc;
- (void)trainPersonalizedLMWithLanguage:(id)a0 configuration:(id)a1 asset:(id)a2 fides:(BOOL)a3 activity:(id)a4 completion:(id /* block */)a5;
- (void)trainPersonalizedLMWithLanguage:(id)a0 configuration:(id)a1 asset:(id)a2 directory:(id)a3 completion:(id /* block */)a4;
- (void)trainPersonalizedLMWithLanguage:(id)a0 configuration:(id)a1 fides:(BOOL)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)trainGlobalNNLMwithFidesSessionURL:(id)a0 completion:(id /* block */)a1;
- (void)buildPhoneticMatchWithLanguage:(id)a0 saveIntermediateFsts:(BOOL)a1 completion:(id /* block */)a2;
- (void)generateAudioWithTexts:(id)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)upperCaseString:(id)a0 completion:(id /* block */)a1;
- (void)trainPersonalizedLMWithLanguage:(id)a0 directory:(id)a1 completion:(id /* block */)a2;

@end
