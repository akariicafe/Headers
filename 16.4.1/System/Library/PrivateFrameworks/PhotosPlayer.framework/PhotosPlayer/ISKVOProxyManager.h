@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ISKVOProxyManager : NSObject {
    NSMutableDictionary *_recordsByIdentifier;
    NSObject<OS_dispatch_queue> *_recordsQueue;
}

@property (class, readonly, nonatomic) ISKVOProxyManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)addProxyWithTarget:(id)a0 queue:(id)a1 keyPaths:(id)a2 delegate:(id)a3;
- (void)removeProxyWithIdentifier:(id)a0;

@end
