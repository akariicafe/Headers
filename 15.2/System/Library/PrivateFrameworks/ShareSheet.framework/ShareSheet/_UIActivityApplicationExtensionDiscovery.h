@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject

@property (copy, nonatomic) NSArray *extensionPointIdentifiers;
@property (copy, nonatomic) id /* block */ fetchShortcutsBlock;

+ (id)extensionBasedActivityForExtension:(id)a0;
+ (id)extensionMatchingDictionariesForExtensionItems:(id)a0;

- (id)reportExtensionsCacheResult;
- (void).cxx_destruct;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)a0;
- (void)primeWithDiscoveryContext:(id)a0;
- (id)activitiesForMatchingContext:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
