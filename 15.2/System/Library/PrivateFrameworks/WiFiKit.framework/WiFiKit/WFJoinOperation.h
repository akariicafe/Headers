@class NSString, WFNetworkScanRecord, CWFAssocParameters, WFNetworkProfile, CWFInterface;

@interface WFJoinOperation : WFOperation {
    NSString *_name;
}

@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) struct __WiFiManagerClient { } *manager;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (nonatomic) BOOL usingCoreWiFi;
@property (retain, nonatomic) CWFAssocParameters *associationParameters;
@property (retain, nonatomic) CWFInterface *interface;

- (void)setName:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)name;
- (void)dealloc;
- (void)_joinWithCoreWiFi;
- (void)_joinWithMobileWiFi;
- (void)joinNetworkRef:(struct __WiFiNetwork { } *)a0;
- (void)_joinComplete:(int)a0 userInfo:(struct __CFDictionary { } *)a1 network:(struct __WiFiNetwork { } *)a2;
- (id)initWithAssocParameters:(id)a0 interface:(id)a1;
- (id)initWithNetwork:(id)a0 profile:(id)a1;

@end
