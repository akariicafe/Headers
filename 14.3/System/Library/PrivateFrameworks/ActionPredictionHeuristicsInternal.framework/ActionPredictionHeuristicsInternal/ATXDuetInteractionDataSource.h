@class ATXHeuristicDevice;

@interface ATXDuetInteractionDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)duetInteractionCountForHandles:(id)a0 sinceDate:(id)a1 callback:(id /* block */)a2;

@end
