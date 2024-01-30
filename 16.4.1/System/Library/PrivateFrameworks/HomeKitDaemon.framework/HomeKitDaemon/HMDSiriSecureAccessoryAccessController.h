@class HMDAssistantWatchAuthenticationDataSource, NSUserDefaults;
@protocol HMDSiriSecureAccessoryAccessControllerDataSource;

@interface HMDSiriSecureAccessoryAccessController : NSObject {
    id<HMDSiriSecureAccessoryAccessControllerDataSource> _dataSource;
    HMDAssistantWatchAuthenticationDataSource *_watchAuthDataSource;
    NSUserDefaults *_pineBoardUserDefaults;
}

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 watchAuthDataSource:(id)a1 pineBoardUserDefaults:(id)a2;
- (void)isUnsecuringSiriActionAllowedWithCompletion:(id /* block */)a0;

@end
