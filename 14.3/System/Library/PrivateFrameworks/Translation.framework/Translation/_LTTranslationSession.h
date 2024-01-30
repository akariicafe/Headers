@class NSString, NSMutableDictionary, NSURL, _LTTranslator, NSObject, _LTSafariLatencyLoggingRequest;
@protocol OS_dispatch_queue, _LTTranslationService;

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_translationQueue;
    NSMutableDictionary *_outstandingRequests;
    _LTSafariLatencyLoggingRequest *_logging;
    NSString *_sessionID;
}

@property (retain, nonatomic) _LTTranslator *translator;
@property (retain, nonatomic) id<_LTTranslationService> service;
@property (copy, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)paragraphTranslation:(id)a0 result:(id)a1 error:(id)a2;
- (void)translate:(id)a0;
- (void)markPageComplete;
- (void)markFirstParagraphComplete;
- (void)_ensureServiceConnection:(id /* block */)a0;
- (id)initWithTranslator:(id)a0;
- (void)provideFeedback:(id)a0;

@end
