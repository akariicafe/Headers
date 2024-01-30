@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    BOOL _requiresCustomPairing;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) BOOL requiresCustomPairing;

+ (id)createDeviceInfoFromTXTRecord:(id)a0;
+ (id)createDeviceInfoFromNetService:(id)a0;

- (long long)connectionType;
- (id)hostname;
- (long long)port;
- (id)deviceInfo;
- (id)initWithNetService:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)updateDeviceInfoWithTXTRecord:(id)a0;
- (void)reset;
- (id)error;
- (id)description;
- (id)name;

@end
