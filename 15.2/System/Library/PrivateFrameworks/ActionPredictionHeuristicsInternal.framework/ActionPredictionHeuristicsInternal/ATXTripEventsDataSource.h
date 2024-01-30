@class ATXHeuristicDevice, PPEventStore;

@interface ATXTripEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
    PPEventStore *_eventStore;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)getLocationForMostRelevantTripInRangeFrom:(id)a0 to:(id)a1 callback:(id /* block */)a2;
- (id)fetchTripEventsFromStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
