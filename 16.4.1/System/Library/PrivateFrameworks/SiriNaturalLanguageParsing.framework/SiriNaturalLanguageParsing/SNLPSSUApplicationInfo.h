@class NSString, NSURL;

@interface SNLPSSUApplicationInfo : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSURL *assetURL;

+ (id)applicationInfoWithBundleIdentifier:(id)a0 assetURL:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 assetURL:(id)a1;

@end
