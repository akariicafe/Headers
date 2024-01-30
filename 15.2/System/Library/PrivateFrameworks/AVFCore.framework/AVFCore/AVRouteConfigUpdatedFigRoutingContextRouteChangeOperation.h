@class NSString, AVWeakReference, NSObject, AVOutputContextDestinationChange;
@protocol OS_dispatch_queue;

@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {
    AVWeakReference *_weakObserver;
    struct OpaqueFigRoutingContext { } *_routingContext;
    struct __CFString { } *_routeChangeID;
    id /* block */ _routeChangeBlock;
    NSObject<OS_dispatch_queue> *_routeChangeIvarAccessQueue;
    AVOutputContextDestinationChange *_result;
}

@property (readonly, nonatomic) AVOutputContextDestinationChange *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routeChangeID:(struct __CFString { } *)a1 routeChangeBlock:(id /* block */)a2;
- (void)_setResultIfNotAlreadySet:(id)a0;
- (void)_routeConfigUpdateWithID:(struct __CFString { } *)a0 endedWithReason:(struct __CFString { } *)a1;
- (BOOL)isAsynchronous;
- (void)start;
- (id)init;
- (void)dealloc;

@end
