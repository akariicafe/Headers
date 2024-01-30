@class NSString;

@interface OBPrivacyBundleProvider : NSObject <OBPrivacyBundleProvider>

@property (copy) NSString *enclosingBundleIdentifier;
@property (copy) NSString *privacyBundleName;
@property (readonly) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bundleRecordWithError:(id *)a0;
- (id)initWithEnclosingBundleIdentifier:(id)a0 privacyBundleName:(id)a1;

@end
