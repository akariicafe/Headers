@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASReachabilityStatusCache : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (id)init;
- (id)statusForDestination:(id)a0;
- (id)statusesForDestinations:(id)a0;
- (void)addStatusesByDestination:(id)a0;
- (void)setStatus:(id)a0 forDestination:(id)a1;

@end
