@class CRAttestationBaseDeviceHandler;

@interface CRAttestationHandler : NSObject <CRAttestationProtocol> {
    CRAttestationBaseDeviceHandler *handle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)challengeComponentsWith:(id)a0 withReply:(id /* block */)a1;
- (void)getStrongComponentsWithReply:(id /* block */)a0;
- (id)getHandlerForDevice;

@end
