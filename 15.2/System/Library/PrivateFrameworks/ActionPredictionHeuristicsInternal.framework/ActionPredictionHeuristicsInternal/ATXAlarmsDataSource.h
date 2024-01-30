@class ATXHeuristicDevice;

@interface ATXAlarmsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)alarmsFromDate:(id)a0 toDate:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
