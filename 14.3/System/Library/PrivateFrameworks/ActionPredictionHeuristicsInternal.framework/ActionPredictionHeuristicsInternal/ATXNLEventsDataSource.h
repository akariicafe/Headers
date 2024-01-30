@class ATXHeuristicDevice;

@interface ATXNLEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)nlEventsWithCallback:(id /* block */)a0;

@end
