@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationContext *context;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)a0;
- (void)_revokeDeviceTrust;
- (void)handleResponseError:(id)a0;

@end
