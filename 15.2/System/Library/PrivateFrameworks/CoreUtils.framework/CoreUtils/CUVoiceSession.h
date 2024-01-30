@class NSString, CUVoiceRequest, VSSpeechSynthesizer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate> {
    CUVoiceRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSMutableArray *_voiceRequests;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)_completeRequest:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)_invalidated;
- (void)dealloc;
- (void)_processQueuedRequests;
- (void)stopSpeaking;
- (void)_speakText:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;
- (void)_completeAllRequestsWithError:(id)a0;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 withError2:(id)a3;
- (void)speakText:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;

@end
