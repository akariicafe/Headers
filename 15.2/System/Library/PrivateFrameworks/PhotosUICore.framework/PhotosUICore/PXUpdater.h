@class NSMutableIndexSet;

@interface PXUpdater : NSObject {
    SEL *_orderedUpdateSelectors;
    unsigned long long _orderedUpdateSelectorsCapacity;
    unsigned long long _orderedUpdateSelectorsCount;
    NSMutableIndexSet *_updateSelectorsNeedingUpdate;
    NSMutableIndexSet *_updateSelectorsAlreadyUpdated;
    BOOL _isPerformingUpdates;
    BOOL _hasUpdatedForCurrentPass;
}

@property (nonatomic, getter=isUpdatePassScheduled) BOOL updatePassScheduled;
@property (nonatomic) BOOL extraChecksEnabled;
@property (readonly, weak, nonatomic) id target;
@property (nonatomic) SEL needsUpdateSelector;

- (void)addUpdateSelector:(SEL)a0;
- (void)updateIfNeeded;
- (void)_scheduleUpdatePassIfNeeded;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setNeedsUpdateOf:(SEL)a0;
- (id)initWithTarget:(id)a0 needsUpdateSelector:(SEL)a1;
- (void)dealloc;
- (void)addUpdateSelector:(SEL)a0 needsUpdate:(BOOL)a1;

@end
