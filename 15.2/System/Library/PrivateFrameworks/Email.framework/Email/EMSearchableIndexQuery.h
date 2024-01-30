@class NSLock, NSString, NSArray, NSError, EMSearchableIndexQueryExpression, NSObject, NSProgress, EFPromise;
@protocol OS_os_log, EMSearchQueryable;

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
@property (retain, nonatomic) id<EMSearchQueryable> query;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) EMSearchableIndexQueryExpression *expression;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) id /* block */ resultsBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ gatheredBlock;
@property (copy, nonatomic) id /* block */ changedItemsBlock;
@property (copy, nonatomic) id /* block */ foundAttributeResultsBlock;
@property (copy, nonatomic) id /* block */ changedAttributeResultsBlock;
@property (copy, nonatomic) id /* block */ removedItemsBlock;
@property (copy, nonatomic) id /* block */ countChangedBlock;
@property (copy, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *rankingQueries;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long signpostID;
@property (readonly) NSProgress *progress;

+ (id)queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 languages:(id)a3;
+ (id)queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 languages:(id)a3 phraseMatchFormatString:(id)a4 comparisonOperator:(long long)a5;
+ (id)searchWordsForPhrase:(id)a0 languages:(id)a1;
+ (id)queryStringByJoiningQueries:(id)a0 withOperand:(long long)a1;
+ (id)_queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 phraseMatchFormatString:(id)a3;
+ (id)_queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 phraseMatchFormatString:(id)a3 comparisonOperator:(long long)a4;
+ (id)queryWithExpression:(id)a0 builder:(id /* block */)a1;
+ (id)_modifierStringFromModifiers:(unsigned long long)a0;
+ (id)_operandStringForOperand:(long long)a0;

- (void)_searchQueryGatherDidEnd;
- (id)initWithExpression:(id)a0 builder:(id /* block */)a1;
- (void)_cancelQuery;
- (BOOL)_isFinishedQueryStatus:(id)a0;
- (void)_performClientWork:(id /* block */)a0;
- (void)_changeCount:(long long)a0;
- (void)_searchQueryDidFailWithError:(id)a0;
- (void)_completed;
- (void)_removeResultsBlock;
- (void)_logSignpostForSearchQueryDidFinishWithStatus:(id)a0;
- (void)start;
- (void)_searchQueryDidChangeCount:(long long)a0;
- (void)_logSignpostForSearchQueryStart;
- (void)_changedItems:(id)a0;
- (void).cxx_destruct;
- (void)_cancel;
- (id)init;
- (void)_failedWithError:(id)a0;
- (void)_gathered;
- (void)_searchQueryDidRemoveIdentifiers:(id)a0;
- (void)dealloc;
- (void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(unsigned long long)a0;
- (void)_changedAttribute:(id)a0 values:(id)a1;
- (void)_searchQueryDidChangeItems:(id)a0;
- (void)cancel;
- (void)_foundItems:(id)a0;
- (void)simulateFailedQueryWithError:(id)a0;
- (void)_searchQueryDidFindItems:(id)a0;
- (void)_removeAllLiveUpdatesBlocks;
- (void)_removedItems:(id)a0;
- (void)_searchQueryDidFindAttribute:(id)a0 values:(id)a1;
- (void)_searchQueryDidComplete;
- (BOOL)_isCancellationError:(id)a0;
- (void)_foundAttribute:(id)a0 values:(id)a1;
- (void)_searchQueryDidChangeAttribute:(id)a0 values:(id)a1;

@end
