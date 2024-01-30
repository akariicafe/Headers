@class NSString, NSDictionary, NSMutableDictionary, WiFiAwarePublisher, NSObject;
@protocol OS_dispatch_queue;

@interface CUNANPublisher : NSObject <WiFiAwarePublisherDelegate> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_sessions;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    WiFiAwarePublisher *_wfaPublisher;
}

@property (nonatomic) unsigned int controlFlags;
@property (nonatomic) BOOL dataPathEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *textInfo;
@property (nonatomic) unsigned int trafficFlags;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ dataSessionStartedHandler;
@property (copy, nonatomic) id /* block */ dataSessionEndedHandler;
@property (copy, nonatomic) id /* block */ receiveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)publisher:(id)a0 receivedMessage:(id)a1 fromSubscriberID:(unsigned char)a2 subscriberAddress:(id)a3;
- (void)publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)publisher:(id)a0 dataTerminatedForHandle:(id)a1 reason:(long long)a2;
- (void)publisherStarted:(id)a0;
- (void)publisher:(id)a0 failedToStartWithError:(long long)a1;
- (void)publisher:(id)a0 terminatedWithReason:(long long)a1;
- (void)sendMessageData:(id)a0 endpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)publisher:(id)a0 dataIndicatedForHandle:(id)a1 serviceSpecificInfo:(id)a2;
- (void)_publisher:(id)a0 dataConfirmedForHandle:(id)a1 localInterfaceIndex:(unsigned int)a2 serviceSpecificInfo:(id)a3;
- (void)reportIssue:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)a0;
- (void)updateLinkStatus:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)dealloc;

@end
