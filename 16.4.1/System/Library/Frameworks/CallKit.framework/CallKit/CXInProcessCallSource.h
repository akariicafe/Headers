@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)bundleURL;
- (BOOL)isPermittedToUsePublicAPI;
- (id)localizedName;
- (int)processIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)bundleIdentifier;
- (id)vendorProtocolDelegate;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;

@end
