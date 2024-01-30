@class ATXHeuristicDevice;

@interface ATXAlarmsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)alarms:(id /* block */)a0;

@end
