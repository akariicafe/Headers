@class ATXHeuristicDevice;

@interface ATXTimeSinceUserWakeupDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)timeIntervalSinceUserWakeupWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
