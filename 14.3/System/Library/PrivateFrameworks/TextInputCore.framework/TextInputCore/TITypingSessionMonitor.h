@class NSObject, NSString, TITypingDESRecordWriter, NSPointerArray, NSLocale, TITypingSession, TIKeyboardLayout;
@protocol TITypingSessionDelegate, OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol, TITypingSessionAggregatedEventSourcing> {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _useDODML;
}

@property (retain, nonatomic) TITypingSession *currentTypingSession;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSPointerArray *aggregateEventsObservers;
@property (retain, nonatomic) TIKeyboardLayout *currentLayout;
@property (weak, nonatomic) id<TITypingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathForTimeTaggedFileName:(id)a0;
+ (id)temporaryKeyboardsDirectory;
+ (id)loadAllStoredSessions;
+ (BOOL)shouldRecordSession:(id)a0;

- (void)addAggregatedEventObserver:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (void)keyboardDidSuspend;
- (id)initWithLocale:(id)a0 useDODML:(BOOL)a1;

@end
