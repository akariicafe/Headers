@class NSString, TIKeyboardInput, NSArray, TITypingSession, NSMutableDictionary, TIUserModelDataStore, TIInputMode, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TISensorWriterWrapper;

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver> {
    TIInputMode *_inputMode;
    NSString *_wordSeparator;
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
    NSString *_idenitifer;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tccNotifyToken;
    BOOL _isTCCAuthorized;
    BOOL _skipTCCAuthorization;
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

+ (id)makeMetricCollector:(id)a0 separator:(id)a1 wordsThreshold:(unsigned long long)a2 isTesting:(BOOL)a3;

- (void)_clear;
- (void)_processEvents;
- (void)_loadStatsFromDataStore;
- (id)_retrieveSavedSessionSampleArray;
- (id)init:(id)a0;
- (void)_setupTCCAuthNotification;
- (void).cxx_destruct;
- (id)eventsDescription:(BOOL)a0;
- (void)handleTypingSession:(id)a0;
- (void)setupSessionSamplesForLayouts;
- (void)dealloc;
- (id)eventsDescription;
- (void)_mapTapsToEvents;
- (id)_mapIDToLayout:(unsigned long long)a0;
- (void)_resetConsumeState;
- (id)_findSessionWithLayoutOfSameDimentions:(id)a0 layout:(id)a1;
- (void)_metricWalk;
- (id)init:(id)a0 separator:(id)a1 wordsThreshold:(unsigned long long)a2 accentedLanguage:(BOOL)a3;
- (void)testTCCAuthorization;
- (void)_coalesceTaps;
- (id)_insertEmojiSwitchEvents:(id)a0;
- (void)_consumeUserAction:(id)a0;
- (void)_reportRipeBuckets;
- (id)_consumeTypingSession:(id)a0;
- (id)init:(id)a0 separator:(id)a1 wordsThreshold:(unsigned long long)a2;
- (id)consumeTypingSession:(id)a0;
- (void)_persistSavedSessionSampleArray;
- (id)init:(id)a0 separator:(id)a1 wordsThreshold:(unsigned long long)a2 accentedLanguage:(BOOL)a3 skipTCCAuthorization:(BOOL)a4;
- (double)totalTimeSpan;
- (void)_mergeStats:(id)a0;
- (void)_consumeWordEntry:(id)a0;
- (double)totalTimeSpanFromLastTap;
- (void)_haltSessionTypingTimer:(id)a0 event:(id)a1;
- (void)placeTaskOnWorkQueue:(id /* block */)a0;
- (void)sessionDidEnd:(id)a0 aligned:(id)a1;

@end
