@class VKRouteLine;

@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol> {
    void *_transitSupport;
    VKRouteLine *_routeLine;
}

- (void)dealloc;
- (id)initWithTransitSupport:(void *)a0 andRouteLine:(id)a1;
- (void)routeLineDidUpdateSections:(id)a0;

@end
