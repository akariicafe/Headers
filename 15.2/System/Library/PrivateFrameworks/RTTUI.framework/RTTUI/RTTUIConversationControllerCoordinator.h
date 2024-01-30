@class RTTUtterance, NSObject, NSPointerArray, NSLock, NSMutableSet, NSMutableArray, NSIndexPath;
@protocol OS_dispatch_queue;

@interface RTTUIConversationControllerCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    NSPointerArray *_conversationControllers;
    NSLock *_realtimeSendLock;
    struct __CTServerConnection { } *_ctConnection;
    NSMutableSet *_registeredCalls;
}

@property (retain, nonatomic) NSMutableArray *utteranceBuffer;
@property (nonatomic) BOOL processingUtteranceBuffer;
@property (readonly, nonatomic) NSIndexPath *inProgressRealTimeIndexPath;
@property (readonly, nonatomic) RTTUtterance *inProgressRealTimeUtterance;

+ (id)coordinator;

- (void).cxx_destruct;
- (id)init;
- (void)_sendNewUtteranceString:(id)a0 atIndex:(unsigned long long)a1 forCellPath:(id)a2 call:(id)a3;
- (id)conversationControllers;
- (id)viewControllerForCallUUID:(id)a0;
- (BOOL)realtimeTextDidChange:(id)a0 forUtterance:(id)a1 lastRowPath:(id)a2;
- (void)processUtteranceQueue;
- (void)addConversationController:(id)a0;
- (void)sendNewUtteranceString:(id)a0 controller:(id)a1;
- (void)registerForCallUpdates:(id)a0;

@end
