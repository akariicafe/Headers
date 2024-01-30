@class WiFiAwareDataSession, NSString, WiFiAwarePublisherDataSessionHandle, WiFiAwarePublisher, NSObject, CUNANEndpoint;
@protocol OS_dispatch_queue;

@interface CUNANDataSession : NSObject <WiFiAwareDataSessionDelegate> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int localInterfaceIndex;
@property (nonatomic) union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } peerAddress;
@property (retain, nonatomic) WiFiAwarePublisher *publisher;
@property (retain, nonatomic) WiFiAwarePublisherDataSessionHandle *wfaDataSessionServer;
@property (nonatomic) unsigned int controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) CUNANEndpoint *peerEndpoint;
@property (copy, nonatomic) id /* block */ terminationHandler;
@property (nonatomic) unsigned int trafficFlags;
@property (readonly, nonatomic) WiFiAwareDataSession *wfaDataSessionClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (BOOL)_dataSession:(id)a0 confirmedForPeerDataAddress:(id)a1 serviceSpecificInfo:(id)a2 error:(id *)a3;
- (void)_terminateServerDataSession;
- (void)dataSession:(id)a0 confirmedForPeerDataAddress:(id)a1 serviceSpecificInfo:(id)a2;
- (void)dataSession:(id)a0 failedToStartWithError:(long long)a1;
- (void)dataSession:(id)a0 terminatedWithReason:(long long)a1;
- (void)dataSessionRequestStarted:(id)a0;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)a0;
- (void)reportIssue:(id)a0;
- (void)updateLinkStatus:(int)a0;

@end
