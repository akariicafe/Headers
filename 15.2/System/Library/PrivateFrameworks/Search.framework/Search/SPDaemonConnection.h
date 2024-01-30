@class NSString, NSObject, SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject {
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) NSString *daemonName;
@property (nonatomic) struct __CFDictionary { } *runningQueries;

+ (id)sharedConnection;
+ (id)sharedBackgroundConnection;

- (void)activate:(id /* block */)a0;
- (void)cancelQuery:(id)a0;
- (void)preheat;
- (void)sendApps:(id)a0;
- (id)connectionQueue;
- (void)requestParsecParametersWithReply:(id /* block */)a0;
- (id)_connection;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)sendMessageForToken:(id)a0;
- (void)barrierOnXPC:(id /* block */)a0;
- (void)_sendFeedbackMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (void)deactivate;
- (id)startQuery:(id)a0 queue:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)_resetConnection;
- (void)_sendMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;
- (void)clearInput:(id)a0;
- (id)initWithDaemonName:(id)a0 qos:(unsigned int)a1;
- (void)sendSFFeedback:(id)a0 type:(long long)a1 queryId:(unsigned long long)a2;

@end
