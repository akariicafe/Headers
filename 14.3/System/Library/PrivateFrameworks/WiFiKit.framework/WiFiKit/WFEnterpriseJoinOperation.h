@class WFNetworkScanRecord, CWFAssocParameters, WFNetworkProfile, CWFInterface;

@interface WFEnterpriseJoinOperation : WFOperation

@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) BOOL usingCoreWiFi;
@property (retain, nonatomic) CWFAssocParameters *associationParameters;
@property (retain, nonatomic) CWFInterface *interface;
@property (nonatomic) struct __WiFiManagerClient { } *manager;
@property (nonatomic) struct __WiFiDeviceClient { } *device;

- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (id)initWithNetwork:(id)a0 profile:(id)a1;
- (void)_joinWithCoreWiFi;
- (void)_joinWithMobileWiFi;
- (void)joinNetworkRef:(struct __WiFiNetwork { } *)a0;
- (void)_joinComplete:(int)a0 userInfo:(struct __CFDictionary { } *)a1 network:(struct __WiFiNetwork { } *)a2;
- (void)_handleEnterpriseJoinResult:(long long)a0 userInfo:(id)a1 network:(struct __WiFiNetwork { } *)a2;
- (id)initWithAssocParameters:(id)a0 interface:(id)a1;

@end
