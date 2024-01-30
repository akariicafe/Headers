@class ATXHeuristicDevice;

@interface ATXBatteryDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)batteryInformationWithCallback:(id /* block */)a0;

@end
