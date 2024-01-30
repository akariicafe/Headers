@class NSString, TITypologyLog, TITypologyStatistic, TIStatusBarStyleOverrideLoggingCapture;
@protocol TITypologyPreferences;

@interface TIKeyboardInputManagerLogger : NSObject <TITypologyLogDelegate, TIKeyboardInputManagerLogging>

@property (retain, nonatomic) NSString *inputModeIdentifier;
@property (retain, nonatomic) TITypologyLog *typologyLog;
@property (retain, nonatomic) TITypologyStatistic *typologyStatistic;
@property (nonatomic) BOOL hadSecureText;
@property (retain, nonatomic) TIStatusBarStyleOverrideLoggingCapture *sbsOverrideLoggingCapture;
@property (readonly, nonatomic) id<TITypologyPreferences> typologyPreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)createTypologyDirectoryAtURL:(id)a0;
+ (void)_backgroundPruneLogsWithPreferences:(id)a0;
+ (void)_writeHumanReadableTraceForTypologyLog:(id)a0 directoryURL:(id)a1;
+ (id)accessibilityConfigInfo;
+ (id)_writeToFileWithTypologyLog:(id)a0 directoryURL:(id)a1;
+ (void)submitAggregrateDictionaryReport:(id)a0 inputModeIdentifier:(id)a1;
+ (void)_backgroundWriteLog:(id)a0 preferences:(id)a1 completion:(id /* block */)a2;
+ (void)pruneTypologyLogsAtDirectoryURL:(id)a0 toMaxNumBytes:(long long)a1 expirationInterval:(double)a2 satisfyingPredicate:(id /* block */)a3;

- (void)setConfig:(id)a0;
- (void)logReceivedCandidateRejected:(id)a0;
- (void)_tryWriteToSyslogWithTrace:(id)a0;
- (void)logReceivedSkipHitTestForTouchEvent:(id)a0 forKeyboardState:(id)a1;
- (BOOL)allowTypologyLogForKeyboardState:(id)a0;
- (void)logAutocorrections:(id)a0 trace:(id)a1 forKeyboardState:(id)a2 requestToken:(id)a3;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logRefinements:(id)a0 forCandidate:(id)a1 keyboardState:(id)a2;
- (void)logKeyboardOutput:(id)a0 keyboardConfiguration:(id)a1 trace:(id)a2 forKeyboardInput:(id)a3 keyboardState:(id)a4;
- (void)logReceivedSetOriginalInput:(id)a0;
- (void)logKeyboardConfig:(id)a0 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)a1 granularity:(int)a2 keyboardState:(id)a3;
- (BOOL)shouldWriteToTypologyLogForKeyboardState:(id)a0;
- (void)dealloc;
- (void)logKeyboardLayout:(id)a0 name:(id)a1;
- (void)logCandidateResultSet:(id)a0 trace:(id)a1 forKeyboardState:(id)a2;
- (void)logReplacements:(id)a0 forString:(id)a1 keyLayout:(id)a2;
- (void)tryStartingTypologyLogForSyncToKeyboardState:(id)a0;
- (void)logKeyboardConfig:(id)a0 textToCommit:(id)a1 forAcceptedCandidate:(id)a2 keyboardState:(id)a3;
- (void)logKeyboardConfig:(id)a0 forSyncToKeyboardState:(id)a1;
- (void)logReceivedTextAccepted:(id)a0;
- (id)initWithTypologyPreferences:(id)a0;
- (void)didReachMaximumEntries:(id)a0;
- (id)writeToFile;
- (void).cxx_destruct;
- (void)backgroundWriteLogs;
- (BOOL)shouldWriteToSyslogForKeyboardState:(id)a0;
- (void)logHitKeyCode:(long long)a0 forTouchEvent:(id)a1 keyboardState:(id)a2;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)a0;

@end
