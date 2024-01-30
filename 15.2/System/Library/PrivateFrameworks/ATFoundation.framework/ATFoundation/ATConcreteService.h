@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATConcreteService : ATService <ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_signalSource;
    double _startTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageLinkWasInitialized:(id)a0;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)run;
- (void)messageLinkWasClosed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageLinkWasOpened:(id)a0;
- (BOOL)stop;

@end
