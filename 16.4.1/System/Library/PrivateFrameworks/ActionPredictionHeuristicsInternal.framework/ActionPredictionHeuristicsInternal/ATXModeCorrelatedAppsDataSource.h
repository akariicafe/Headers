@class ATXHeuristicDevice;

@interface ATXModeCorrelatedAppsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)modeCorrelatedAppsInCurrentModeWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
