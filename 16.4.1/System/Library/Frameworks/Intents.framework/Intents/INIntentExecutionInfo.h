@class NSString, NSArray;

@interface INIntentExecutionInfo : INExecutionInfo {
    NSArray *_extensions;
    NSArray *_uiExtensions;
}

@property (readonly, copy, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) long long preferredCallProvider;
@property (readonly, copy, nonatomic) NSString *uiExtensionBundleId;
@property (readonly, nonatomic) BOOL hasCustomUIExtension;

+ (void)initialize;

- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (id)_extensionsWithError:(id *)a0;
- (id)_initWithIntentClassName:(id)a0 preferredCallProvider:(long long)a1 launchableAppBundleId:(id)a2 displayableAppBundleId:(id)a3 extensionBundleId:(id)a4 uiExtensionBundleId:(id)a5 containingAppBundleURL:(id)a6;
- (id)_matchingAttributesForExtensionPoint:(id)a0 error:(id *)a1;
- (id)_uiExtensionsWithError:(id *)a0;
- (BOOL)canRunOnLocalDevice;
- (id)initWithIntentClassName:(id)a0 extensionBundleId:(id)a1;
- (id)initWithIntentClassName:(id)a0 launchableAppBundleId:(id)a1;
- (id)initWithIntentTypeName:(id)a0;

@end
