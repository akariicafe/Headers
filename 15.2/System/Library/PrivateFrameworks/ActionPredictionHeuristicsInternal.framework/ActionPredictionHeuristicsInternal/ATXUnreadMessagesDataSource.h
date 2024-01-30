@class ATXHeuristicDevice, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUnreadMessagesDataSource : NSObject {
    ATXHeuristicDevice *_device;
    NSObject<OS_dispatch_queue> *_resultsQueue;
}

- (id)initWithDevice:(id)a0;
- (void)unreadMessagesWithLimit:(long long)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
