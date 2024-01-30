@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int _transportSessionID;
}

- (BOOL)isIPv6;
- (void)start;
- (int)networkInterfaceType;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (unsigned int)networkMTU;
- (id)initWithTransportSessionID:(unsigned int)a0;

@end
