@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)localizedName;
- (struct { unsigned int x0[8]; })auditToken;
- (void).cxx_destruct;
- (id)bundleURL;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (id)bundleIdentifier;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;

@end
