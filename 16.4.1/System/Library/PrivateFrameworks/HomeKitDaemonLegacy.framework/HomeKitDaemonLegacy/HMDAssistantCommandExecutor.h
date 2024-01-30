@class HMFTimer, NSString, HMFMessageDispatcher, HMDAssistantCommand, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate> {
    HMDAssistantCommand *_initialCommand;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_actionResults;
    NSMutableDictionary *_pendingCommands;
    NSString *_clientValidity;
    HMFTimer *_executionTimer;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executorWithCommand:(id)a0 workQueue:(id)a1 messageDispatcher:(id)a2;

- (void)timerDidFire:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_command;
- (id)initWithCommand:(id)a0 workQueue:(id)a1 messageDispatcher:(id)a2;

@end
