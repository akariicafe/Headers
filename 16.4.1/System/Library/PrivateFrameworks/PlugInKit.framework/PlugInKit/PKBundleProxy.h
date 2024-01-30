@class NSString, NSDictionary, NSURL, LSBundleProxy;

@interface PKBundleProxy : NSObject <PKBundleProxy>

@property (readonly, nonatomic) LSBundleProxy *lsObject;
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

- (void).cxx_destruct;
- (id)initWithLSBundleProxy:(id)a0;

@end
