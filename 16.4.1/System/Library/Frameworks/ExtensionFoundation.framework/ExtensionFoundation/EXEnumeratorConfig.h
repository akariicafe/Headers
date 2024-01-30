@class NSURL, NSDictionary, NSString;

@interface EXEnumeratorConfig : NSObject <EXEnumeratorConfig>

@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *xpcExtensionsCache;
@property (readonly) NSURL *xpcExtensionPointsCache;
@property (readonly) NSURL *extensionPointsConfigURL;
@property (readonly) NSDictionary *legacyExtensionPointAllowList;
@property (readonly) NSDictionary *compatibilityExtensionPointAllowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
