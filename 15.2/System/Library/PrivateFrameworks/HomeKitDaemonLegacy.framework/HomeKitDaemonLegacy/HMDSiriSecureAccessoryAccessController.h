@class HMDAssistantWatchAuthenticationDataSource, NSUserDefaults;
@protocol HMDSiriSecureAccessoryAccessControllerDataSource;

@interface HMDSiriSecureAccessoryAccessController : NSObject {
    id<HMDSiriSecureAccessoryAccessControllerDataSource> _dataSource;
    HMDAssistantWatchAuthenticationDataSource *_watchAuthDataSource;
    NSUserDefaults *_pineBoardUserDefaults;
}

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)isUnsecuringSiriActionAllowedWithCompletion:(id /* block */)a0;
- (id)initWithDataSource:(id)a0 watchAuthDataSource:(id)a1 pineBoardUserDefaults:(id)a2;

@end
