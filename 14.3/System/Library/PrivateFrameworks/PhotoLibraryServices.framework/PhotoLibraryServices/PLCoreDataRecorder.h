@interface PLCoreDataRecorder : NSObject

+ (BOOL)isRecording;
+ (BOOL)stopRecording;
+ (void)reset;
+ (id)_queryPlanFromSQL:(const char *)a0 usingDb:(struct sqlite3 { } *)a1;
+ (BOOL)_isCorrectDB:(struct sqlite3 { } *)a0;
+ (struct sqlite3 { } *)_dbHandleFromConnection:(id)a0;
+ (BOOL)_installConnectionSwizzle;
+ (void)_bindVariablesSubEntryForStatement:(id)a0 outBindVariables:(id *)a1 outBindIntArrays:(id *)a2;
+ (id)_recordedStatementsAndReset:(BOOL)a0;
+ (BOOL)_installRecorder;
+ (id)recordedEntriesDescription;
+ (void)_recordExecutedStatementSQL:(id)a0 queryPlan:(id)a1 bindVariables:(id)a2 bindIntArrays:(id)a3 db:(struct sqlite3 { } *)a4 pageHitCountBeforeExecution:(int)a5 pageMissCountBeforeExecution:(int)a6;
+ (id)recordedEntries;
+ (BOOL)startRecordingForDbWithFilename:(id)a0 limitToMarkedThreads:(BOOL)a1 includeBindVariables:(BOOL)a2 includeIOMetrics:(BOOL)a3 entryDecorator:(id /* block */)a4 entriesAvailableHandler:(id /* block */)a5;
+ (id)recordedEntriesAndReset;

@end
