@class NSArray, NSError, AIDAAccountManager, AKAppleIDAuthenticationController;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) id<AADeviceListDelegate> delegate;

- (id)_authController;
- (id)_aidaAccount;
- (id)initWithAccountManager:(id)a0;
- (id)_appleAccount;
- (void)_loadRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshDeviceList;
- (void)_renewCredentials;
- (id)_accountStore;
- (void)_setDeviceList:(id)a0 loadError:(id)a1;
- (void)_loadDeviceList;

@end
