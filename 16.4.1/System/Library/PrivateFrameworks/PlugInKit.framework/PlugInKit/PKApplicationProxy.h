@class NSArray, NSString, NSURL, NSDictionary;

@interface PKApplicationProxy : PKBundleProxy <PKApplicationProxy>

@property (readonly, nonatomic) NSArray *plugInKitPlugins;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
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

+ (id)applicationProxyForBundleURL:(id)a0;


@end
