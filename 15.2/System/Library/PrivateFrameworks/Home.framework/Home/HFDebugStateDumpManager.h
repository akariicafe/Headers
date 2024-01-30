@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HFDebugStateDumpManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateHandlerQueue;
@property (retain, nonatomic) NSMutableDictionary *stateDumpHandlersByName;
@property (readonly, nonatomic) int logStateDumpNotifyToken;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)registerStateDumpHandler:(id /* block */)a0 withName:(id)a1;
- (id)performStateDump:(BOOL)a0;

@end
