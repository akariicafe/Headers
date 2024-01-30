@class NSMutableArray, NSString, FCCloudContext, FCKeyValueStore, NSObject;
@protocol FCCommandQueueDelegate, OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate> {
    BOOL _suspended;
    BOOL _executingCommand;
    FCCloudContext *_context;
    NSString *_persistentStorePath;
    NSString *_name;
    FCKeyValueStore *_persistentStore;
    long long _urgency;
    id<FCCommandQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingCommands;
    NSObject<OS_dispatch_source> *_cooldownTimer;
    NSObject<OS_dispatch_group> *_pendingCommandsGroup;
    NSObject<OS_dispatch_group> *_executingCommandsGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)command:(id)a0 didFinishWithStatus:(unsigned long long)a1;
- (void)clear;
- (void)networkReachabilityDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 urgency:(long long)a1 suspended:(BOOL)a2 delegate:(id)a3;
- (void)addCommand:(id)a0;
- (void)addCommand:(id)a0 saveCompletion:(id /* block */)a1;
- (void)resume;
- (void)activityObservingApplicationDidEnterBackground;
- (void)dealloc;
- (id)initWithContext:(id)a0 storeDirectory:(id)a1 storeFilename:(id)a2 urgency:(long long)a3 suspended:(BOOL)a4 delegate:(id)a5;

@end
