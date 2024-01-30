@class NSArray, NSError, AIDAAccountManager, AKAppleIDAuthenticationController;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) id<AADeviceListDelegate> delegate;

- (void).cxx_destruct;
- (id)_authController;
- (id)initWithAccountManager:(id)a0;
- (id)_accountStore;
- (id)_aidaAccount;
- (void)refreshDeviceList;
- (void)_setDeviceList:(id)a0 loadError:(id)a1;
- (void)_loadDeviceList;
- (void)_loadRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (void)_renewCredentials;
- (id)_appleAccount;

@end
