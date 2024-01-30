@class _LTSafariLatencyLoggingRequest, NSString, NSMutableDictionary, _LTRateLimiter, _LTTranslator, NSObject, NSURL;
@protocol OS_dispatch_queue, _LTTranslationService;

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate> {
    NSMutableDictionary *_outstandingRequests;
    _LTSafariLatencyLoggingRequest *_logging;
    NSString *_sessionID;
    BOOL _waitingForService;
}

@property (retain, nonatomic) _LTTranslator *translator;
@property (retain, nonatomic) id<_LTTranslationService> service;
@property (retain, nonatomic) _LTRateLimiter *rateLimiter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *translationQueue;
@property (copy, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)translate:(id)a0;
- (void)paragraphTranslation:(id)a0 result:(id)a1 error:(id)a2;
- (void)markFirstParagraphComplete;
- (void)markProgressDone;
- (void)markPageComplete;
- (void)markPageLoaded;
- (id)initForFutureService;
- (void)prepareWithService:(id)a0;
- (void)_ensureServiceConnection:(id /* block */)a0;
- (id)initWithTranslator:(id)a0;
- (void)provideFeedback:(id)a0;

@end
