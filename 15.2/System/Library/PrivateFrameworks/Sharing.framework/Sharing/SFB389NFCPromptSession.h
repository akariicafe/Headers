@class NSXPCConnection, SFB389NFCPromptConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SFB389NFCPromptSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFB389NFCPromptConfiguration *_config;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ userResponseHandler;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (id)_getRemoteObjectProxy;
- (id)initWithInitialConfiguration:(id)a0;
- (void)updateCardConfiguration:(id)a0;
- (void)dealloc;

@end
