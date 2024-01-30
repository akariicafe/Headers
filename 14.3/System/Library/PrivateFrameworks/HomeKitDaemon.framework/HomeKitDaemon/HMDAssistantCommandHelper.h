@class NSString, NSUUID, HMFMessageDispatcher, HMDHome, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandHelper : HMFObject <HMFMessageReceiver, HMFLogging>

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) id /* block */ mediaResponseHandler;
@property (retain, nonatomic) NSUUID *messageId;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSMutableArray *responses;
@property (nonatomic) unsigned long long numErrors;
@property (nonatomic) BOOL executingActionSet;
@property (retain, nonatomic) NSArray *requests;
@property (retain, nonatomic) NSArray *mediaRequests;
@property (retain, nonatomic) NSMutableArray *mediaResponses;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_register;
- (void)addActionSetRequest:(id)a0 actionSet:(id)a1 completionHandler:(id /* block */)a2;
- (void)addMediaWriteRequests:(id)a0 withRequestProperty:(id)a1 completion:(id /* block */)a2;
- (void)addReadRequests:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)addWriteRequests:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)removeResponses:(id)a0;
- (id)initWithQueue:(id)a0 msgDispatcher:(id)a1;
- (void)timeoutAndReportResults;
- (void)reportOperationStartedForAccessory:(id)a0;
- (void)handleAccessoryCharacteristicsChangedNotification:(id)a0;
- (void)_reportResponsesForMediaRequests;
- (void)_reportResponses;
- (void)_reportOperationStartedForAccessory:(id)a0;
- (void)__handleAccessoryCharacteristicsChanged:(id)a0;

@end
