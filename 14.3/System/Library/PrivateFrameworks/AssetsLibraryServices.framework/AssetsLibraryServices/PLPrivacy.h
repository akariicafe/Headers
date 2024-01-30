@class PLAssetsdPrivacySupportClient, NSObject;
@protocol OS_dispatch_queue;

@interface PLPrivacy : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _authRightFullAccess;
    long long _authRightAddOnly;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}

@property BOOL hasHandledLimitedLibraryReprompt;
@property (nonatomic, getter=isLimitedLibrarySupported) BOOL limitedLibrarySupported;

+ (id)sharedInstance;
+ (BOOL)_isLimitedLibrarySupportedInClient;

- (id)init;
- (void).cxx_destruct;
- (void)_resolvePreflightStatusForScope:(long long)a0;
- (long long)photosAccessAllowedWithScope:(long long)a0 auditToken:(struct { unsigned int x0[8]; })a1 clientAuthorization:(id)a2;
- (void)checkPhotosAccessAllowedWithScope:(long long)a0 handler:(id /* block */)a1;
- (void)_checkAuthStatusForPhotosAccessScope:(long long)a0 promptIfUnknown:(BOOL)a1 resultHandler:(id /* block */)a2;
- (void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
- (void)requestLimitedLibraryPromptForApplicationIdentifier:(id)a0;
- (void)_isPhotosAccessAllowedWithScope:(long long)a0 promptIfUnknown:(BOOL)a1 synchronous:(BOOL)a2 resultHandler:(id /* block */)a3;
- (long long)checkPhotosAccessAllowedWithScope:(long long)a0;
- (long long)_authStatusForScope:(long long)a0;
- (long long)photosAccessAllowedWithScope:(long long)a0;
- (void)_setAuthStatus:(long long)a0 scope:(long long)a1;

@end
