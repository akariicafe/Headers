@class NSMutableArray, FCCloudContext, NSString, FCKeyValueStore, NSObject;
@protocol FCCommandQueueDelegate, OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate>

@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *persistentStorePath;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) FCKeyValueStore *persistentStore;
@property (nonatomic) long long urgency;
@property (weak, nonatomic) id<FCCommandQueueDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (retain, nonatomic) NSMutableArray *pendingCommands;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *cooldownTimer;
@property (nonatomic, getter=isExecutingCommand) BOOL executingCommand;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pendingCommandsGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *executingCommandsGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWorkQueue;

- (void)_applicationDidEnterBackground;
- (void)activityObservingApplicationDidEnterBackground;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isEmpty;
- (void)_executeNextCommand;
- (void)clear;
- (void)addCommand:(id)a0 saveCompletion:(id /* block */)a1;
- (void)_loadFromDisk;
- (void)_addCommand:(id)a0 saveCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)_qualityOfServiceForNextCommand;
- (void)dealloc;
- (void)addCommand:(id)a0;
- (void)_savePendingCommands;
- (id)initWithContext:(id)a0 persistentStorePath:(id)a1 urgency:(long long)a2 suspended:(BOOL)a3 delegate:(id)a4;
- (void)command:(id)a0 didFinishWithStatus:(unsigned long long)a1;
- (void)resume;
- (void)networkReachabilityDidChange:(id)a0;
- (void)_scheduleCommandExecution;
- (void)_serializeCommands:(id)a0 toStore:(id)a1;
- (id)_encodeCommand:(id)a0;
- (id)_deserializeCommandsFromStore:(id)a0;
- (id)_decodeCommand:(id)a0;
- (id)initWithContext:(id)a0 storeDirectory:(id)a1 storeFilename:(id)a2 urgency:(long long)a3 suspended:(BOOL)a4 delegate:(id)a5;
- (id)initWithContext:(id)a0 urgency:(long long)a1 suspended:(BOOL)a2 delegate:(id)a3;

@end
