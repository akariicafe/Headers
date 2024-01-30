@class _ATXRecentWorkoutDataSourceInternal, ATXHeuristicDevice;

@interface ATXRecentWorkoutDataSource : NSObject {
    ATXHeuristicDevice *_device;
    _ATXRecentWorkoutDataSourceInternal *_internal;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)fetchRecentWorkoutStateWithCompletionHandler:(id /* block */)a0;

@end
