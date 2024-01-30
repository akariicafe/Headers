@class NSURL, NSUUID, NSString, NSDictionary, NSDate, NSNumber, NSArray;
@protocol PKExtensionPointProxy, PKBundleProxy;

@interface PKPlugInProxy : PKBundleProxy <PKPlugInProxy>

@property (readonly, nonatomic) NSUUID *pluginUUID;
@property (readonly, nonatomic) id<PKBundleProxy> containingBundle;
@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic, getter=isOnSystemPartition) BOOL onSystemPartition;
@property (readonly, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSDictionary *infoPlist;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) id<PKExtensionPointProxy> extensionPoint;
@property (readonly, nonatomic) NSArray *launchPersonas;
@property (readonly, nonatomic) NSDictionary *pluginKitDictionary;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSURL *relativeAppStoreReceiptURL;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)initWithUUID:(id)a0;
- (id)objectForInfoDictionaryKey:(id)a0 ofClass:(Class)a1 inScope:(unsigned long long)a2;
- (id)initWithLSPlugInKitProxy:(id)a0;

@end
