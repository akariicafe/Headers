@class LSApplicationRecord, NSDictionary, NSURL, LSApplicationProxy, _LSValidationToken;

@interface LSAppLink : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic, getter=areEnabledByDefault) BOOL enabledByDefault;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *browserSettings;
@property long long openStrategy;
@property (retain) _LSValidationToken *_validationToken;
@property (copy) NSURL *URL;
@property (retain) LSApplicationRecord *targetApplicationRecord;
@property (readonly) LSApplicationProxy *targetApplicationProxy;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (void)_openWithAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_dispatchQueue;
+ (id)_appLinkWithURL:(id)a0 applicationRecord:(id)a1 plugInClass:(Class)a2;
+ (id)_appLinksWithState:(id)a0 context:(struct LSContext { id x0; } *)a1 limit:(unsigned long long)a2 requireEntitlement:(BOOL)a3 error:(id *)a4;
+ (BOOL)setSettingsSwitchState:(long long)a0 forApplicationIdentifier:(id)a1 error:(id *)a2;
+ (id)_appLinksWithState:(id)a0 context:(struct LSContext { id x0; } *)a1 limit:(unsigned long long)a2 URLComponents:(id)a3 error:(id *)a4;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)a0;
+ (BOOL)removeAllSettingsReturningError:(id *)a0;
+ (id)_appLinksWithState:(id)a0 limit:(unsigned long long)a1 requireEntitlement:(BOOL)a2 error:(id *)a3;
+ (void)openWithURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)URLComponentsAreValidForAppLinks:(id)a0 error:(id *)a1;
+ (void)getAppLinksWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_openAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getAppLinkWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)appLinksWithURL:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
+ (void)openWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)_URLIsValidForAppLinks:(id)a0 error:(id *)a1;

- (void)openInWebBrowser:(BOOL)a0 setOpenStrategy:(long long)a1 webBrowserState:(id)a2 completionHandler:(id /* block */)a3;
- (void)openInWebBrowser:(BOOL)a0 setAppropriateOpenStrategyAndWebBrowserState:(id)a1 completionHandler:(id /* block */)a2;
- (long long)openStrategy;
- (void)openInWebBrowser:(BOOL)a0 setOpenStrategy:(long long)a1 webBrowserState:(id)a2 configuration:(id)a3 completionHandler:(id /* block */)a4;
- (void)openWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_validateReturningError:(id *)a0;
- (id)_validationTokenPayload;
- (void)setOpenStrategy:(long long)a0;
- (BOOL)setBrowserSettings:(id)a0 error:(id *)a1;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)removeSettingsReturningError:(id *)a0;
- (id)_userActivityWithState:(id)a0 error:(id *)a1;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)setEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
