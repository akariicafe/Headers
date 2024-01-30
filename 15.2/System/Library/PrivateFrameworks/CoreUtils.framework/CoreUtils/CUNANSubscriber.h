@class WiFiAwareSubscriber, NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    BOOL _startedCalled;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSMutableDictionary *_wfaEndpoints;
    WiFiAwareSubscriber *_wfaSubscriber;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int controlFlags;
@property (readonly, copy) NSArray *discoveredEndpoints;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ endpointFoundHandler;
@property (copy, nonatomic) id /* block */ endpointLostHandler;
@property (copy, nonatomic) id /* block */ endpointChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ receiveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)sendMessageData:(id)a0 endpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscriber:(id)a0 receivedMessage:(id)a1 fromPublishID:(unsigned char)a2 address:(id)a3;
- (void)subscriberStarted:(id)a0;
- (void)subscriber:(id)a0 failedToStartWithError:(long long)a1;
- (void)subscriber:(id)a0 terminatedWithReason:(long long)a1;
- (void)subscriber:(id)a0 receivedDiscoveyResult:(id)a1;
- (void)subscriber:(id)a0 lostDiscoveryResultForPublishID:(unsigned char)a1 address:(id)a2;
- (void)_lostAllEndpoints;
- (void)_subscriber:(id)a0 receivedDiscoveyResult:(id)a1;
- (void)_subscriber:(id)a0 lostDiscoveryResultForPublishID:(unsigned char)a1 address:(id)a2;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)dealloc;

@end
