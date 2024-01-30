@class VSSpeechRequest, NSMutableDictionary, NSString, VSPresynthesizedAudioRequest, VSSpeechConnection;
@protocol VSSpeechConnectionDelegate;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>

@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSMutableDictionary *concurrentSynthesisRequests;
@property (retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (weak, nonatomic) VSSpeechConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)speechRequestDidPause;
- (void).cxx_destruct;
- (oneway void)synthesisRequest:(id)a0 didReceiveTimingInfo:(id)a1;
- (oneway void)speechRequestDidStopWithSuccess:(BOOL)a0 phonemesSpoken:(id)a1 error:(id)a2;
- (oneway void)speechRequestMark:(long long)a0 didStartForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)speechRequestDidStart;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)a0 error:(id)a1;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)a0;
- (oneway void)speechRequestDidContinue;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)a0 error:(id)a1;
- (oneway void)synthesisRequest:(id)a0 didFinishWithInstrumentMetrics:(id)a1 error:(id)a2;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)a0;
- (oneway void)presynthesizedAudioRequestDidStart;

@end
