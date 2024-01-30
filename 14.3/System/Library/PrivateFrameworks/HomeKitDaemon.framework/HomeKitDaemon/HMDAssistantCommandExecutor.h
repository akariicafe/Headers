@class HMFTimer, HMFMessageDispatcher, NSMutableDictionary, HMDAssistantCommand, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate>

@property (retain, nonatomic) HMDAssistantCommand *initialCommand;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *actionResults;
@property (retain, nonatomic) NSMutableDictionary *pendingCommands;
@property (retain, nonatomic) NSString *clientValidity;
@property (retain, nonatomic) HMFTimer *executionTimer;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executorWithCommand:(id)a0 workQueue:(id)a1 messageDispatcher:(id)a2;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_command;
- (void)timerDidFire:(id)a0;
- (void)_reportResults:(id)a0;
- (BOOL)_isValid;
- (void)_sendResponse:(id)a0;
- (id)initWithCommand:(id)a0 workQueue:(id)a1 messageDispatcher:(id)a2;
- (void)_startExecutionTimer;
- (void)_reportFailure;
- (BOOL)_initialCommandIsMultipleActions;
- (void)_executeCommand:(id)a0;
- (void)_accumulateActionResultsFromResponse:(id)a0 command:(id)a1;

@end
