@class NSString, TITypologyLog, TITypologyStatistic;

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging>

@property (retain, nonatomic) NSString *inputModeIdentifier;
@property (retain, nonatomic) TITypologyLog *typologyLog;
@property (retain, nonatomic) TITypologyStatistic *typologyStatistic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSubmitStructuredDataReportForTypologyLog:(id)a0;
+ (void)pruneTypologyLogsToMaxNumBytes:(long long)a0 satisfyingPredicate:(id /* block */)a1;
+ (void)writeHumanReadableTraceForTypologyLog:(id)a0;
+ (id)accessibilityConfigInfo;
+ (id)generateStructuredDataReportForTypologyLog:(id)a0;
+ (id)writePropertyList:(id)a0 withFilename:(id)a1;
+ (void)submitStructuredDataReportForTypologyLog:(id)a0;
+ (id)writeToFileWithTypologyLog:(id)a0;
+ (void)submitAggregrateDictionaryReport:(id)a0 inputModeIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (BOOL)shouldWriteToSyslogForKeyboardState:(id)a0;
- (void)logKeyboardOutput:(id)a0 keyboardConfiguration:(id)a1 forKeyboardInput:(id)a2 keyboardState:(id)a3;
- (BOOL)shouldWriteToTypologyLogForKeyboardState:(id)a0;
- (void)dealloc;
- (void)logReceivedSetOriginalInput:(id)a0;
- (void)logKeyboardLayout:(id)a0 name:(id)a1;
- (void)logAutocorrections:(id)a0 forKeyboardState:(id)a1 requestToken:(id)a2;
- (void)logRefinements:(id)a0 forCandidate:(id)a1 keyboardState:(id)a2;
- (id)writeToFile;
- (void)logCandidateResultSet:(id)a0 forKeyboardState:(id)a1;
- (void)setConfig:(id)a0;
- (void)logToHumanReadableTrace:(id)a0;
- (void)logReceivedTextAccepted:(id)a0;
- (void)logReceivedSkipHitTestForTouchEvent:(id)a0 forKeyboardState:(id)a1;
- (void)logKeyboardConfig:(id)a0 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)a1 granularity:(int)a2 keyboardState:(id)a3;
- (void)logKeyboardConfig:(id)a0 forSyncToKeyboardState:(id)a1;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)a0;
- (void)logReplacements:(id)a0 forString:(id)a1 keyLayout:(id)a2;
- (void)backgroundWriteLogsAndSubmitReport;
- (void)logHitKeyCode:(long long)a0 forTouchEvent:(id)a1 keyboardState:(id)a2;
- (void)logKeyboardConfig:(id)a0 textToCommit:(id)a1 forAcceptedCandidate:(id)a2 keyboardState:(id)a3;
- (void)logReceivedCandidateRejected:(id)a0;

@end
