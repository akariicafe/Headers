@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    BOOL _requiresCustomPairing;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) BOOL requiresCustomPairing;

+ (id)createDeviceInfoFromTXTRecord:(id)a0;
+ (id)createDeviceInfoFromNetService:(id)a0;

- (id)hostname;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (id)description;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithNetService:(id)a0;
- (long long)connectionType;
- (id)name;
- (id)error;
- (long long)port;
- (void)dealloc;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)updateDeviceInfoWithTXTRecord:(id)a0;

@end
