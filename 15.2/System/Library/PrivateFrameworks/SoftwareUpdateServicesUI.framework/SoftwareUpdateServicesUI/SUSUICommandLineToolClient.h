@class NSString, NSXPCConnection;
@protocol SUSUICommandLineToolClientDelegate;

@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}

@property (weak, nonatomic) id<SUSUICommandLineToolClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)_invalidateConnection;
- (void)setPasscodePolicy:(unsigned long long)a0;
- (void)_connectToServerIfNecessary;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_noteConnectionDropped;
- (void)dealloc;
- (id)_remoteInterface;
- (void)showMiniAlert:(unsigned long long)a0 usingFakeData:(BOOL)a1 errorCode:(id)a2;
- (void)showFollowUp:(unsigned long long)a0;
- (void)showAuthenticationUIWithOptions:(unsigned long long)a0 result:(id /* block */)a1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)a0 result:(id /* block */)a1;
- (void)toggleSettingsBadge:(BOOL)a0;
- (void)reboot:(BOOL)a0;
- (void)simulateComingFromOTAUpdate;
- (void)downloadDidFinish;
- (void)_noteServerExiting;

@end
