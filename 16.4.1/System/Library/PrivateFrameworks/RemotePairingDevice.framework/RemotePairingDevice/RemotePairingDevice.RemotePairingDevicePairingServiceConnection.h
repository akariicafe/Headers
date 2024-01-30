@interface RemotePairingDevice.RemotePairingDevicePairingServiceConnection : NSObject {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)allowPromptlessPairingForHostWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllPairingRecordsWithInvokingCompletionHandlerOn:(id)a0 completion:(id /* block */)a1;
- (long long)getUSBConectedHostTrustStateWithError:(id *)a0;
- (void)initiateWirelessPairingSessionWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)trustedHostInfoAndReturnError:(id *)a0;

@end
