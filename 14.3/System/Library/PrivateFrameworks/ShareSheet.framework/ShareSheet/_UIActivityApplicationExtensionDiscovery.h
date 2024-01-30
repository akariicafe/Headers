@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject

@property (copy, nonatomic) NSArray *extensionPointIdentifiers;
@property (copy, nonatomic) id /* block */ fetchShortcutsBlock;

+ (id)extensionMatchingDictionariesForExtensionItems:(id)a0;
+ (id)extensionBasedActivityForExtension:(id)a0;

- (id)initWithExtensionPointIdentifiers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerPendingContinuousExtensionsDiscovery;
- (id)reportExtensionsCacheResult;
- (id)activitiesForMatchingContext:(id)a0 error:(id *)a1;
- (void)primeWithDiscoveryContext:(id)a0;

@end
