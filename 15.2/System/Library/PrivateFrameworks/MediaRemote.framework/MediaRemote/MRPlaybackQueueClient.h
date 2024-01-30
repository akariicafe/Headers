@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueClient : NSObject {
    NSMutableDictionary *_controllers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_handleOriginRemovedNotification:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)subscriptionControllerForPlayerPath:(id)a0;
- (void).cxx_destruct;
- (void)_handleApplicationRemovedNotification:(id)a0;
- (void)dealloc;
- (void)_handlePlayerPathRemovedNotification:(id)a0;

@end
