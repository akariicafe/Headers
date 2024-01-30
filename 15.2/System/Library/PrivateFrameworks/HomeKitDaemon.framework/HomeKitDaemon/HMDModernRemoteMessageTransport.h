@class NSString, HMDRemoteMessageTransport, HMDModernTransportMessageContextManager, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue, HMDModernRemoteMessageTransportReachabilityDelegate, HMDDateProvider;

@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport <HMFMessageTransportDelegate>

@property (getter=isStarted) BOOL started;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport;
@property (readonly, nonatomic) HMDRemoteMessageTransport *idsTransport;
@property (readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager;
@property (readonly, nonatomic) id<HMDDateProvider> dateProvider;
@property (readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer;
@property (nonatomic, getter=isRapportLinkSlow) BOOL rapportLinkSlow;
@property (weak) id<HMDModernRemoteMessageTransportReachabilityDelegate> reachabilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)start;
- (void).cxx_destruct;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportTransport:(id)a1 idsTransport:(id)a2 contextManager:(id)a3 dateProvider:(id)a4;

@end
