@class NSString, AVWeakReference, NSObject, AVOutputContextDestinationChange;
@protocol OS_dispatch_queue;

@interface AVFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {
    AVWeakReference *_weakObserver;
    struct OpaqueFigRoutingContext { } *_routingContext;
    struct __CFString { } *_successNotification;
    id /* block */ _routeChangeBlock;
    NSObject<OS_dispatch_queue> *_notificationManagementQueue;
    BOOL _actOnRouteChangeNotifications;
    struct __CFNumber { } *_routeChangeID;
    AVOutputContextDestinationChange *_result;
}

@property (readonly, nonatomic) AVOutputContextDestinationChange *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_routeChangeStartedWithID:(struct __CFNumber { } *)a0;
- (void)dealloc;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void)_routeChangeComplete;
- (void)_routeChangeWithID:(struct __CFNumber { } *)a0 endedWithReason:(struct __CFString { } *)a1;
- (void)_setResultIfNotAlreadySet:(id)a0;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 successNotification:(struct __CFString { } *)a1 routeChangeBlock:(id /* block */)a2;

@end
