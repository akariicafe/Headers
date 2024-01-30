@class NSArray, SSXPCConnection, NSObject;
@protocol SSDownloadHandlerDelegate, OS_dispatch_queue;

@interface SSDownloadHandler : NSObject {
    SSXPCConnection *_controlConnection;
    id<SSDownloadHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_downloadPhasesToIgnore;
    long long _handlerID;
    SSXPCConnection *_observerConnection;
    BOOL _sessionsNeedPowerAssertion;
    BOOL _sessionsShouldBlockOtherDownloads;
}

@property (readonly) long long handlerIdentifier;
@property id<SSDownloadHandlerDelegate> delegate;
@property (copy) NSArray *downloadPhasesToIgnore;
@property BOOL sessionsNeedPowerAssertion;
@property BOOL sessionsShouldBlockOtherDownloads;

- (void)_connectToDaemon;
- (void)_handleMessage:(id)a0 fromServerConnection:(id)a1;
- (id)description;
- (id)init;
- (void)_sendDisconnectMessage;
- (BOOL)_sendAuthenticationSessionWithMessage:(id)a0;
- (BOOL)_sendSessionHandleWithMessage:(id)a0;
- (BOOL)_sendSessionCancelWithMessage:(id)a0;
- (BOOL)_sendSessionPauseWithMessage:(id)a0;
- (id)_controlConnection;
- (id)_newSessionWithMessage:(id)a0;
- (void)resetDisavowedSessions;
- (void)dealloc;
- (void)_setValue:(id)a0 forProperty:(const char *)a1;

@end
