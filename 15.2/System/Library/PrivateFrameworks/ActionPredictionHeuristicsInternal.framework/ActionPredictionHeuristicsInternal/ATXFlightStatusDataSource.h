@class ATXHeuristicDevice;

@interface ATXFlightStatusDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)flightStatusForFlight:(id)a0 callback:(id /* block */)a1;
- (BOOL)_flightIDIsValid:(id)a0;

@end
