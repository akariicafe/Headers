@class NSArray, NSError, AIDAAccountManager, AKAppleIDAuthenticationController;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) id<AADeviceListDelegate> delegate;

- (void)_loadRequest:(id)a0 responseHandler:(id /* block */)a1;
- (id)_accountStore;
- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (void)_setDeviceList:(id)a0 loadError:(id)a1;
- (void)refreshDeviceList;
- (id)initWithAccountManager:(id)a0;
- (void)_loadDeviceList;
- (id)_aidaAccount;
- (id)_authController;
- (id)_appleAccount;
- (void)_renewCredentials;
- (void).cxx_destruct;

@end
