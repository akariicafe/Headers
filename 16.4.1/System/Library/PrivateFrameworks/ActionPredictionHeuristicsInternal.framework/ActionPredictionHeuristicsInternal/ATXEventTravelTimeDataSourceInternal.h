@class _PASLock;

@interface ATXEventTravelTimeDataSourceInternal : NSObject {
    _PASLock *_hypothesizerCacheLock;
}

+ (id)sharedInstance;

- (void)travelTimeInfoForEventID:(id)a0 location:(id)a1 expectedArrivalDate:(id)a2 transportType:(id)a3 localOnlyAfterFirstUpdate:(BOOL)a4 callback:(id /* block */)a5;
- (id)init;
- (void).cxx_destruct;

@end
