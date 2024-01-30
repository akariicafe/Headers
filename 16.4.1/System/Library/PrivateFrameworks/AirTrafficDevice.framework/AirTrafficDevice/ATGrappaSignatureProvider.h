@class ATDeviceSettings, ATGrappaSession;

@interface ATGrappaSignatureProvider : ATSignatureProvider {
    ATGrappaSession *_grappaSession;
    ATDeviceSettings *_settings;
}

- (void).cxx_destruct;
- (id)createSignature:(id *)a0 forData:(id)a1;
- (id)initWithGrappaSession:(id)a0;
- (id)verifySignature:(id)a0 forData:(id)a1;

@end
