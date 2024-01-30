@class NSDate, ATXContextualActionCountCache;

@interface ATXContextualActionManager : NSObject {
    ATXContextualActionCountCache *actionCountCache;
    NSDate *actionCountCacheCreationDate;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStaticActions:(id)a0;
- (id)getCountsForContext:(id)a0;
- (id)getAllCounts;
- (double)getIntervalSinceOldestEvent;
- (void)_updateCacheIfNeeded;
- (void)_getActionsFromLastMonth;

@end
