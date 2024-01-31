@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (id)vendorProtocolDelegate;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleIdentifier;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)bundleURL;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;

@end
