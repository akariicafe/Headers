@class NSString, TIKeyboardInput, NSArray, TITypingSession, NSMutableDictionary, TIUserModelDataStore, TIInputMode, NSMutableArray, NSObject, NSDictionary, NLTagger;
@protocol OS_dispatch_queue, TISensorWriterWrapper;

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver> {
    TIInputMode *_inputMode;
    NSMutableDictionary *_touchToEventMap;
    NSMutableArray *_events;
    NSArray *_sortedEvents;
    NSMutableArray *_touches;
    NSMutableArray *_layoutIDs;
    NSMutableArray *_taps;
    long long _wordPosition;
    TIKeyboardInput *_lastInput;
    long long _currentWordPosition;
    long long _eventOrder;
    unsigned long long _aggregatedWordThreshold;
    TIUserModelDataStore *_userModelDataStore;
    BOOL _accentedLanguage;
    NSMutableArray *_accentedLayoutsMap;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tccNotifyToken;
    BOOL _isTCCAuthorized;
    BOOL _skipTCCAuthorization;
    NSDictionary *_wordBucketDictionary;
    NSDictionary *_emojiBuckets;
    NLTagger *_tagger;
}

@property (nonatomic) unsigned long long wordAccumulationThreshold;
@property (retain, nonatomic) id<TISensorWriterWrapper> dataWriter;
@property (retain, nonatomic) NSMutableArray *savedSessionSamplesArray;
@property (retain, nonatomic) NSMutableArray *currentSessionSamplesArray;
@property (retain, nonatomic) TITypingSession *typingSession;
@property (nonatomic) BOOL isLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeMetricCollector:(id)a0 wordsThreshold:(unsigned long long)a1 isTesting:(BOOL)a2;

- (void)loadEmojiBucketDictionaryIfNecessary;
- (void)_clear;
- (id)consumeTypingSession:(id)a0;
- (id)init:(id)a0;
- (id)_findSessionWithLayoutOfSameDimentions:(id)a0 layout:(id)a1;
- (void)placeTaskOnWorkQueue:(id /* block */)a0;
- (id)getWordBucketCategoryForWord:(id)a0;
- (id)init:(id)a0 wordsThreshold:(unsigned long long)a1 accentedLanguage:(BOOL)a2;
- (void)_consumePathsAndPredictions:(id)a0 emojiSearchMode:(BOOL)a1;
- (void)loadWordBucketDictionaryIfNecessary;
- (void)_consumeInputsAndTouches:(id)a0 occurenceTime:(double)a1 emojiSearchMode:(BOOL)a2;
- (void)_consumeWordEntry:(id)a0;
- (double)totalTimeSpanFromLastTap;
- (id)eventsDescription:(BOOL)a0;
- (void)_mapTapsToEvents;
- (id)_retrieveSavedSessionSampleArray;
- (void)_loadStatsFromDataStore;
- (void)_consumeDeleteWordEvent:(id)a0;
- (void)_haltSessionTypingTimer:(id)a0 event:(id)a1;
- (id)init:(id)a0 wordsThreshold:(unsigned long long)a1 accentedLanguage:(BOOL)a2 skipTCCAuthorization:(BOOL)a3;
- (id)_consumeTypingSession:(id)a0;
- (void)_coalesceTaps;
- (id)privateEventsDescription;
- (void)testTCCAuthorization;
- (id)loadDataWithFilename:(id)a0;
- (void).cxx_destruct;
- (void)sessionDidEnd:(id)a0 aligned:(id)a1;
- (id)_insertEmojiSwitchEvents:(id)a0;
- (id)_mapIDToLayout:(unsigned long long)a0;
- (void)removeSamplesWithNegativeDurationForTypingSession:(id)a0;
- (void)setupSessionSamplesForLayouts;
- (void)handleTypingSession:(id)a0;
- (void)_processEvents;
- (void)_setupTCCAuthNotification;
- (void)dealloc;
- (id)eventsDescription;
- (void)_resetConsumeState;
- (void)_mergeStats:(id)a0;
- (void)_persistSavedSessionSampleArray;
- (void)_consumeUserAction:(id)a0;
- (id)lemmatizeWord:(id)a0;
- (void)_reportRipeBuckets;
- (double)totalTimeSpan;
- (id)init:(id)a0 wordsThreshold:(unsigned long long)a1;
- (void)_metricWalk;

@end
