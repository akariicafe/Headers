@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (BOOL)isPermittedToUsePublicAPI;
- (void).cxx_destruct;
- (id)localizedName;
- (int)processIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (id)bundleIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)vendorProtocolDelegate;
- (id)bundleURL;
- (id)identifier;

@end
