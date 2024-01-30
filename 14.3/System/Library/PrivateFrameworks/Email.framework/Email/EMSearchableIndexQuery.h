@class NSError, NSString, NSArray, EMSearchableIndexQueryExpression, NSLock, CSSearchQuery, NSProgress, NSObject, EFPromise;
@protocol OS_os_log;

@interface EMSearchableIndexQuery : NSObject <EFLoggable, EMSearchableIndexQueryBuilder, EFSignpostable, EFCancelable, NSProgressReporting> {
    NSLock *_lock;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    EFPromise *_resultsPromise;
}

@property (class, readonly, nonatomic) double intervalForSpotlightFailureSimulation;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (copy, nonatomic) NSString *logPrefixString;
@property (copy, nonatomic) NSString *queryStatus;
@property (nonatomic) BOOL queryDidMoveToFinishedState;
@property (nonatomic) BOOL liveQueryDidGather;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSError *simulatedFailedQueryError;
@property (retain, nonatomic) CSSearchQuery *query;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) EMSearchableIndexQueryExpression *expression;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) id /* block */ resultsBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ gatheredBlock;
@property (copy, nonatomic) id /* block */ changedItemsBlock;
@property (copy, nonatomic) id /* block */ removedItemsBlock;
@property (copy, nonatomic) id /* block */ countChangedBlock;
@property (copy, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *rankingQueries;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long signpostID;
@property (readonly) NSProgress *progress;

+ (id)_queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 phraseMatchFormatString:(id)a3 comparisonOperator:(long long)a4;
+ (id)_modifierStringFromModifiers:(unsigned long long)a0;
+ (id)_queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 phraseMatchFormatString:(id)a3;
+ (id)queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 languages:(id)a3;
+ (id)queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 languages:(id)a3 phraseMatchFormatString:(id)a4 comparisonOperator:(long long)a5;
+ (id)queryStringByJoiningQueries:(id)a0 withOperand:(long long)a1;
+ (id)searchWordsForPhrase:(id)a0 languages:(id)a1;
+ (id)queryWithExpression:(id)a0 builder:(id /* block */)a1;
+ (id)_operandStringForOperand:(long long)a0;

- (void)cancel;
- (void)_completed;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelQuery;
- (void)dealloc;
- (void)_gathered;
- (void)start;
- (id)initWithExpression:(id)a0 builder:(id /* block */)a1;
- (void)_searchQueryDidFailWithError:(id)a0;
- (void)_removeResultsBlock;
- (void)_removeAllLiveUpdatesBlocks;
- (void)_searchQueryDidFindItems:(id)a0;
- (void)_searchQueryDidComplete;
- (void)_searchQueryGatherDidEnd;
- (void)_searchQueryDidChangeItems:(id)a0;
- (void)_searchQueryDidRemoveIdentifiers:(id)a0;
- (void)_searchQueryDidChangeCount:(long long)a0;
- (BOOL)_isFinishedQueryStatus:(id)a0;
- (void)_logSignpostForSearchQueryDidFinishWithStatus:(id)a0;
- (void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(unsigned long long)a0;
- (BOOL)_isCancellationError:(id)a0;
- (void)_failedWithError:(id)a0;
- (void)_logSignpostForSearchQueryStart;
- (void)_foundItems:(id)a0;
- (void)_performClientWork:(id /* block */)a0;
- (void)_changedItems:(id)a0;
- (void)_removedItems:(id)a0;
- (void)_changeCount:(long long)a0;
- (void)simulateFailedQueryWithError:(id)a0;
- (void)_cancel;

@end
