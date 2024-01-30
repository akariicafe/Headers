@interface CLSPublicEventCache : CLSDBCache

- (id)predicateForTimeLocationTuple:(id)a0;
- (id)init;
- (BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)a0 forTimeLocationTuples:(id)a1;
- (void)_updateManagedEvent:(id)a0 withEvent:(id)a1 inContext:(id)a2;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (BOOL)hasTimeLocationTuple:(id)a0;
- (id)dataModelName;
- (id)publicEventsForTimeLocationTuple:(id)a0;
- (id)publicEventsForMuid:(unsigned long long)a0;
- (unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)a0;
- (id)publicEventFromManagedObject:(id)a0;

@end
