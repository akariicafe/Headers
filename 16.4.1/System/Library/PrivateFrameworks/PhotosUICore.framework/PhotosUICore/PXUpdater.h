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

- (void)updateIfNeeded;
- (void)addUpdateSelector:(SEL)a0;
- (void)setNeedsUpdateOf:(SEL)a0;
- (id)initWithTarget:(id)a0;
- (void)addUpdateSelector:(SEL)a0 needsUpdate:(BOOL)a1;
- (void)dealloc;
- (id)init;
- (void)_scheduleUpdatePassIfNeeded;
- (id)initWithTarget:(id)a0 needsUpdateSelector:(SEL)a1;
- (void).cxx_destruct;

@end
