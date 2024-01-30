@class _TtC8FMClient7Session, AuthenticationProvider, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FMIPSADeviceSearch : SADPDeviceSearch

@property (retain, nonatomic) _TtC8FMClient7Session *clientSession;
@property (retain, nonatomic) AuthenticationProvider *authenticationProvider;
@property (nonatomic) BOOL isSearchAuthenticated;
@property (nonatomic) BOOL isSharedDevice;
@property (retain, nonatomic) NSString *ownerDsid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *commandQueue;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)initializeSearch;
- (void)performSearchWithCompletion:(id /* block */)a0;
- (void)localizationTest;
- (void)computeSiriResponseWithFoundDevices:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (void)searchDevicesWithCompletion:(id /* block */)a0;
- (void)invalidateClientSession;

@end
