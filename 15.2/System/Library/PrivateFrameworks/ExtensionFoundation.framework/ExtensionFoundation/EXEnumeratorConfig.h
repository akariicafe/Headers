@class NSURL, NSDictionary, NSString;

@interface EXEnumeratorConfig : NSObject <EXEnumeratorConfig>

@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *xpcExtensionsCache;
@property (readonly) NSURL *xpcExtensionPointsCache;
@property (readonly) NSURL *extensionPointsConfigURL;
@property (readonly) NSDictionary *legacyExtensionPointAllowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
