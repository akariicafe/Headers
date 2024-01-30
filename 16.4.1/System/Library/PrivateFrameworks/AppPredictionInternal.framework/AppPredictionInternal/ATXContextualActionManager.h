@class NSDate, ATXContextualActionCountCache;

@interface ATXContextualActionManager : NSObject {
    ATXContextualActionCountCache *actionCountCache;
    NSDate *actionCountCacheCreationDate;
}

- (id)init;
- (void).cxx_destruct;
- (void)_getActionsFromLastMonth;
- (void)_updateCacheIfNeeded;
- (id)getAllCounts;
- (id)getCountsForContext:(id)a0;
- (double)getIntervalSinceOldestEvent;
- (id)initWithStaticActions:(id)a0;

@end
