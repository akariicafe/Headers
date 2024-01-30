@interface DSRemotePairing.DSRemotePairing : NSObject

- (id)init;
- (long long)getNumberOfPairedDevicesWithCompletion:(id /* block */)a0;
- (void)removeAllPairedDevicesWithInvokingCompletionHandlerOn:(id)a0 completion:(id /* block */)a1;

@end
