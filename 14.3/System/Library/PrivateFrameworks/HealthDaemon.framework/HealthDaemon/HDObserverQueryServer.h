@class NSString, NSNumber;

@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    BOOL _deliverOnUnlock;
    BOOL _observeUnfrozenSeries;
    NSNumber *_anchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_deliverDataWasUpdatedWithAnchor:(id)a0;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (void)profile:(id)a0 didInsertQuantity:(id)a1 type:(id)a2 dateInterval:(id)a3 series:(id)a4 anchor:(id)a5;
- (void)_queue_stop;

@end
