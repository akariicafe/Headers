@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TCTelemetry : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_cachedSentenceHashArray;
    unsigned long long _capacity;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_cacheHitForSentence:(id)a0;
- (void)_registerPayload:(id)a0 forEvent:(id)a1;
- (void)trackPostEditingRequest:(id)a0 inString:(id)a1 offset:(unsigned long long)a2 tagger:(id)a3 appIdentifier:(id)a4;
- (void)trackResponse:(long long)a0 toGrammarDetail:(id)a1 language:(id)a2 appIdentifier:(id)a3;

@end
