@class NSString, RMProfilesAdapter, NSURLSession;

@interface RMProfilesController : NSObject

@property (retain, nonatomic) RMProfilesAdapter *profilesAdapter;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (copy, nonatomic) NSString *profileIdentifierPrefix;

- (void).cxx_destruct;
- (id)installedProfileIdentifiers;
- (void)uninstallProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithURLSession:(id)a0 profilesAdapter:(id)a1 profileIdentifierPrefix:(id)a2;
- (id)profileIdentifierForConfiguration:(id)a0;
- (void)_installProfileAtPath:(id)a0 identifier:(id)a1 deviceChannel:(BOOL)a2 configuration:(id)a3 completionHandler:(id /* block */)a4;
- (void)_installProfileData:(id)a0 configuration:(id)a1 deviceChannel:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithProfileIdentifierPrefix:(id)a0;
- (void)downloadAndInstallProfileConfiguration:(id)a0 fromURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)profileNameForConfiguration:(id)a0;

@end
