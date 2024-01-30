@interface CHIPOtaSoftwareUpdateProvider : CHIPCluster

@property (readonly) struct OtaSoftwareUpdateProviderCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)applyUpdateRequest:(id)a0 newVersion:(unsigned int)a1 responseHandler:(id /* block */)a2;
- (void)notifyUpdateApplied:(id)a0 currentVersion:(unsigned int)a1 responseHandler:(id /* block */)a2;
- (void)queryImage:(unsigned short)a0 productId:(unsigned short)a1 imageType:(unsigned short)a2 hardwareVersion:(unsigned short)a3 currentVersion:(unsigned int)a4 protocolsSupported:(unsigned char)a5 location:(id)a6 requestorCanConsent:(BOOL)a7 metadataForProvider:(id)a8 responseHandler:(id /* block */)a9;

@end
