@interface VCControlChannelFaceTime : VCControlChannel {
    unsigned int _callID;
    struct tagHANDLE { int x0; } *_SIPHandle;
}

- (void)dealloc;
- (BOOL)sendReliableMessageAndWait:(id)a0;
- (id)initWithCallID:(unsigned int)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (void)sendReliableMessage:(id)a0;

@end
