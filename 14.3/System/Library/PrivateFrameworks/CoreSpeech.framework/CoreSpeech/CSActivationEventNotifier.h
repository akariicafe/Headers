@class NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedNotifier;

- (id)init;
- (void).cxx_destruct;
- (void)notifyActivationEvent:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 completion:(id /* block */)a3;
- (id)_createXPCClientConnection;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;

@end
