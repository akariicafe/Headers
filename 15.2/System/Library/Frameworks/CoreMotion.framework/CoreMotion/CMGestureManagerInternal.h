@class NSObject;
@protocol OS_dispatch_queue;

@interface CMGestureManagerInternal : NSObject {
    int fPriority;
    void *fLocationdConnection;
    id /* block */ fGestureHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (id)initWithPriority:(int)a0;
- (void)startGestureUpdatesWithHandlerPrivate:(id /* block */)a0;
- (void)stopGestureUpdatesPrivate;
- (void)dealloc;

@end
