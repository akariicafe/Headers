@interface VCControlChannelFaceTime : VCControlChannel {
    unsigned int _callID;
    struct tagHANDLE { int x0; } *_SIPHandle;
}

- (void)dealloc;
- (id)initWithCallID:(unsigned int)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (void)sendReliableMessage:(id)a0 withTopic:(id)a1;
- (BOOL)sendReliableMessageAndWait:(id)a0 withTopic:(id)a1;

@end
