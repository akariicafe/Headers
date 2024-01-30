@class NSString, NSDictionary, _PASSimpleCoalescingTimer, NSObject, _PASLock;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface ATXStackStateTracker : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedPersistInternalStateOperation;
    _PASLock *_internalStateLock;
    NSString *_path;
}

@property (retain, nonatomic) NSDictionary *currentSuggestionsWidgetLayouts;
@property (retain, nonatomic) NSDictionary *currentAppPredictionPanelLayouts;

+ (id)sharedInstance;

- (BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)a0;
- (void)coalescedPersistInternalState;
- (BOOL)stackIsStale:(id)a0;
- (BOOL)loadInternalState;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (id)initTrackerInDirectory:(id)a0;
- (void)updateStackRotationEventsByQueryingBiome;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)lastStackRotationEvent:(id)a0;
- (id)stackStateForStackId:(id)a0;
- (void)cleanupOldDataWithHomeScreenPages:(id)a0;
- (id)init;
- (id)stackCreationEvent:(id)a0;
- (BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (id)topWidgetUniqueIdOfStack:(id)a0;
- (id)layoutForLastStalenessRotation:(id)a0;
- (BOOL)persistInternalState;
- (id)_blendingCacheIdToStackIdMap:(id)a0;
- (id)dataFromDisk;
- (void)updateStackRotationEvents;
- (BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (BOOL)stackWasCreatedALongTimeAgo:(id)a0;
- (BOOL)mostRecentRotationOfStackIsSystemInitiated:(id)a0;
- (id)lastStackShownEvent:(id)a0;
- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;

@end
