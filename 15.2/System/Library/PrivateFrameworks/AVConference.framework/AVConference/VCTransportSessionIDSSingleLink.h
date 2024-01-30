@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS

- (int)onStart;
- (id)initWithNotificationQueue:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { } *)a0;

@end
