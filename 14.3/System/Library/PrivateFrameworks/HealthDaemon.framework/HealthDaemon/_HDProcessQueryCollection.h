@class NSString, NSArray, NSMutableDictionary, NSObject, HDQueryServerClientState;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDProcessQueryCollection : NSObject {
    NSMutableDictionary *_queryServersByUUID;
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *processBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *queryServers;
@property (readonly, nonatomic) BOOL hasQueryServers;
@property (copy, nonatomic) HDQueryServerClientState *clientState;

- (void)removeQueryServer:(id)a0;
- (void).cxx_destruct;
- (void)addQueryServer:(id)a0;
- (void)queue_startStateChangeTimerWithInterval:(double)a0 handler:(id /* block */)a1;
- (id)initWithProcessBundleIdentifier:(id)a0;
- (void)queue_cancelStateChangeTimer;

@end
