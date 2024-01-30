@interface DropInCore.XPCDispatcher : _TtCs12_SwiftObject <DIXPCServerInterface> {
    void /* unknown type, empty encoding */ dropInManager;
    void /* unknown type, empty encoding */ audioSystemManager;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ xpcClientDataSource;
}

- (void)cancelSessionWithContext:(id)a0 session:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)checkInWithCompletionHandler:(id /* block */)a0;
- (void)endSessionWithContext:(id)a0 session:(id)a1 completionHandler:(id /* block */)a2;
- (void)getCurrentSessionWithCompletionHandler:(id /* block */)a0;
- (void)getDownlinkMutedWithCompletionHandler:(id /* block */)a0;
- (void)getUplinkMutedForCurrentSessionWithCompletionHandler:(id /* block */)a0;
- (void)getUplinkMutedWithCompletionHandler:(id /* block */)a0;
- (void)loadDevicesWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerAudioPowerWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestStateForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDownlinkMuted:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setUplinkMuted:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setUplinkMutedForCurrentSession:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startSessionWithContext:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateState:(long long)a0 reason:(id)a1 completionHandler:(id /* block */)a2;

@end
