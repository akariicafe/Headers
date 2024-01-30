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

- (void)preheat;
- (id)startQuery:(id)a0 queue:(id)a1 delegate:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonName:(id)a0 qos:(unsigned int)a1;
- (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;
- (void)dealloc;
- (void)cancelQuery:(id)a0;
- (void)requestParsecParametersWithReply:(id /* block */)a0;
- (void)activate:(id /* block */)a0;
- (void)barrierOnXPC:(id /* block */)a0;
- (void)sendMessageForToken:(id)a0;
- (void)_sendMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (void)activate;
- (void)sendApps:(id)a0;
- (id)_connection;
- (void)_sendFeedbackMessage:(id)a0 object:(id)a1 info:(id)a2 reply:(id /* block */)a3;
- (void)clearInput:(id)a0;
- (void)_resetConnection;
- (void)sendSFFeedback:(id)a0 type:(long long)a1 queryId:(unsigned long long)a2;
- (void)deactivate;
- (id)connectionQueue;

@end
