@class NSString, NSURL, NSDate, NSSet, WBSHistoryVisit, NSData, NSMutableArray;

@interface WBSHistoryItem : NSObject {
    WBSHistoryVisit *_lastVisit;
    int _visitCount;
    struct unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> > { struct __compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> > { struct WBSHistoryItemVisitCountScoresStorage *__value_; } __ptr_; } _visitCountScores;
}

@property (readonly, nonatomic) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) const int *dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (readonly, nonatomic) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) const int *weeklyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) long long databaseID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) NSDate *lastVisitedDate;
@property (readonly, nonatomic) NSMutableArray *visits;
@property (readonly, nonatomic) int visitCount;
@property (readonly, nonatomic) int visitCountScore;
@property (readonly, nonatomic) BOOL shouldRecomputeDerivedVisitCountScores;
@property (readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property (nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (readonly, nonatomic) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property (readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, copy, nonatomic) NSString *userVisibleHostOrFallbackURLString;

+ (void)initialize;
+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;
+ (id)synchronizationQueue;

- (void)_wasVisitedOnSynchronizationQueue:(id)a0;
- (void).cxx_destruct;
- (void)_addExistingVisit:(id)a0;
- (void)scoreOfVisit:(id)a0 wasUpdatedFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)dealloc;
- (void)addExistingVisit:(id)a0;
- (void)wasRedirectedFrom:(id)a0 to:(id)a1;
- (void)_addVisit:(id)a0;
- (BOOL)_visitsPendingWriteSetContains:(id)a0;
- (void)removeVisitsOnSynchronizationQueue:(id)a0 candidateLastVisit:(id)a1;
- (void)visitWasModified:(id)a0;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
- (id).cxx_construct;
- (void)mergeDataFromItem:(id)a0;
- (id)initWithURLString:(id)a0;
- (void)updateLastVisitIfNil:(id)a0;
- (void)wasVisited:(id)a0;
- (void)_addVisitToPendingWriteSet:(id)a0;
- (id)initWithHistoryStreamedItem:(const struct _HistoryStreamedItem { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; long long x3; long long x4; char *x5; int *x6; unsigned long long x7; int *x8; unsigned long long x9; } *)a0;
- (void)_accessVisitCountScoresStorage:(id /* block */)a0;
- (void)updateWithStreamedItem:(const struct _HistoryStreamedItem { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; long long x3; long long x4; char *x5; int *x6; unsigned long long x7; int *x8; unsigned long long x9; } *)a0;
- (id)_visitsPendingWriteSetCreatingIfNeeded:(BOOL)a0;
- (void)removeVisits:(id)a0 candidateLastVisit:(id)a1;
- (void)recomputeDerivedVisitCountScoresWithVisits:(id)a0;
- (void)updateWithServiceItem:(id)a0;
- (id)initWithSQLiteRow:(id)a0;

@end
