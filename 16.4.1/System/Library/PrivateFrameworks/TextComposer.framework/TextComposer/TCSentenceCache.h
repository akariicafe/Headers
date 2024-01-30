@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TCSentenceCache : NSObject {
    NSMutableDictionary *_cachedResultsDictionary;
    NSMutableArray *_cachedSentenceArray;
    NSMutableSet *_cachedAutocorrectedSentences;
    NSMutableDictionary *_cachedReversionsDictionary;
    NSMutableArray *_cachedCorrectionArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _capacity;
}

@property (readonly) unsigned long long capacity;

- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_controlRepeatedAutocorrectionResultsForSentence:(id)a0 offset:(unsigned long long)a1 mutableResults:(id)a2;
- (BOOL)_detailRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSentence:(id)a1 matchesRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inString:(id)a3 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)_inSerialQueueAddCachedReversion:(id)a0 forCorrections:(id)a1;
- (void)_inSerialQueueAddCachedReversionsForResults:(id)a0 sentence:(id)a1;
- (id)_retrieveCachedGrammarDetailForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 matchingSentence:(id)a3;
- (BOOL)_retrieveCachedResultsForSentence:(id)a0 offset:(unsigned long long)a1 mutableResults:(id)a2;
- (void)_storeCachedResults:(id)a0 forSentence:(id)a1;
- (void)addGrammarDetailsForSentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 result:(id)a1 mutableDetails:(id)a2;
- (void)controlRepeatedAutocorrectionResultsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 mutableResults:(id)a4;
- (void)resetRepeatedAutocorrectionCache;
- (id)retrieveCachedGrammarDetailForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 tagger:(id)a3;
- (void)retrieveCachedResultsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 mutableResults:(id)a4 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5;
- (id)retrieveCachedReversionsForString:(id)a0;
- (void)storeCachedResults:(id)a0 forString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 tagger:(id)a3 offset:(unsigned long long)a4;

@end
