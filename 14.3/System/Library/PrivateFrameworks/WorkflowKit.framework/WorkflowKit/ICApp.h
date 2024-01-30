@class NSString, NSDictionary, WFImage, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICApp : NSObject

@property (retain, nonatomic) WFImage *icon;
@property (nonatomic) BOOL checkedInstallStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *allBundleIdentifiers;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSString *iTunesIdentifier;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSArray *schemes;
@property (readonly, nonatomic) NSArray *exportedFileTypes;
@property (readonly, nonatomic) NSArray *documentTypes;
@property (readonly, nonatomic) NSArray *documentActions;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1;
- (id)bundleIdentifiersByIdiom;
- (id)localizedString:(id)a0 identifier:(id)a1;
- (id)schemeNamed:(id)a0;
- (void)loadIconWithCompletionHandler:(id /* block */)a0;
- (BOOL)determinesInstallStatusViaURLScheme;
- (BOOL)isCurrentlyInstalled;
- (void)resetInstalledStatus;
- (void)updateInstalledStatus;
- (void)openFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)openFile:(id)a0 withAnnotation:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadAppInStoreController:(id)a0 withCampaignToken:(id)a1 completionHandler:(id /* block */)a2;
- (id)identifierFromDictionaryForCurrentIdiom:(id)a0;

@end
