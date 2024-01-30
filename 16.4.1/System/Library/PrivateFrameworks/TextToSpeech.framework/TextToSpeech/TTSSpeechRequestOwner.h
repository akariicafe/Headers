@class NSString, TTSSpeechRequest;
@protocol TTSSpeechConnectionDelegate, TTSSpeechService;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate>

@property (weak, nonatomic) id<TTSSpeechService> speechService;
@property (weak, nonatomic) id<TTSSpeechConnectionDelegate> delegate;
@property (readonly, nonatomic) TTSSpeechRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)availableVoicesForLanguageCode:(id)a0 queryingMobileAssets:(BOOL)a1;
- (void)dealloc;
- (id)init;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)startSpeechRequest:(id)a0;
- (void).cxx_destruct;
- (void)_setRequest:(id)a0;
- (void)continueCurrentSpeechRequest;
- (id)initWithSpeechService:(id)a0;
- (void)pauseCurrentSpeechRequestAtMark:(long long)a0 waitUntilPaused:(BOOL)a1;
- (oneway void)speechRequest:(id)a0 didStopWithSuccess:(BOOL)a1 phonemesSpoken:(id)a2 forService:(id)a3 error:(id)a4;
- (oneway void)speechRequest:(id)a0 didSynthesizeSilentlyToURL:(id)a1;
- (oneway void)speechRequest:(id)a0 withMarker:(id)a1 didStartForService:(id)a2;
- (oneway void)speechRequestDidContinue:(id)a0 forService:(id)a1;
- (oneway void)speechRequestDidPause:(id)a0 forService:(id)a1;
- (oneway void)speechRequestDidStart:(id)a0 forService:(id)a1;
- (void)stopCurrentSpeechRequestAtMark:(long long)a0 waitUntilStopped:(BOOL)a1;

@end
