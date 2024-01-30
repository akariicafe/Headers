@interface RMSFairPlaySession : NSObject {
    struct FPSAPContextOpaque_ { } *_sessionToken;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
}

@property (readonly, nonatomic, getter=isHandshakeComplete) BOOL handshakeComplete;

- (void)dealloc;
- (void)invalidate;
- (BOOL)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x0; unsigned char x1[20]; } *)a0;
- (id)_hexStringForData:(id)a0;
- (id)handshakeIterationWithData:(id)a0;
- (id)handshakeData;
- (id)headerForURL:(id)a0;

@end
