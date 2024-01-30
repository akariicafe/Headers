@class NSString, AFSiriActivationConnection, AFNotifyObserver, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling> {
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriActivationConnection *_connection;
    AFNotifyObserver *_clientStateObserver;
    NSMutableDictionary *_clientStateTransitionHandlersByTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_waitUntilListeningForContext:(id)a0 timeoutInterval:(double)a1 completion:(id /* block */)a2;
- (BOOL)handleContext:(id)a0 completion:(id /* block */)a1;

@end
