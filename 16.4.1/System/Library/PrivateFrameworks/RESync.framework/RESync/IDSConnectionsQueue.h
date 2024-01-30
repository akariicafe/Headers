@class NSMutableArray, NSMutableDictionary, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface IDSConnectionsQueue : NSObject <IDSSessionDelegatePrivate, IDSServiceDelegatePrivate>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *allConnections;
@property (retain, nonatomic) NSMutableArray *pendingConnections;
@property (retain, nonatomic) NSMutableArray *endedConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3 withOptions:(id)a4;
- (void)dealloc;
- (void).cxx_destruct;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)dequeSession:(id)a0;
- (id)initWithIDSService:(id)a0 queue:(id)a1;
- (void)queueNewSessionForDestination:(id)a0;

@end
