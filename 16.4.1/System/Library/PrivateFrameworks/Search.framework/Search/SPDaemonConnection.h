@class NSString, NSObject, SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject {
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) NSString *daemonName;
@property (nonatomic) struct __CFDictionary { } *runningQueries;

+ (id)sharedBackgroundConnection;
+ (id)sharedConnection;

- (void)deactivate;
- (void)_resetConnection;
- (void)sendSFFeedback:(id)a0 type:(long long)a1 queryId:(unsigned long long)a2;
- (id)initWithDaemonName:(id)a0 qos:(unsigned int)a1;
- (void)preheat;
- (id)connectionQueue;
- (void)requestParsecParametersWithReply:(id /* block */)a0;
- (void)activate:(id /* block */)a0;
- (void)dealloc;
- (void)cancelQuery:(id)a0;
- (void)sendMessageForToken:(id)a0;
- (void)_sendMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (void)_sendInteractiveMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (void)sendApps:(id)a0;
- (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;
- (id)init;
- (void)activate;
- (void)clearInput:(id)a0;
- (void)_sendFeedbackMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (id)_connection;
- (void).cxx_destruct;
- (void)barrierOnXPC:(id /* block */)a0;
- (id)startQuery:(id)a0 queue:(id)a1 delegate:(id)a2;

@end
