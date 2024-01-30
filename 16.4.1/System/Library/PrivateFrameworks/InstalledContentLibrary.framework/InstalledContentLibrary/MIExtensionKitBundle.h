@class NSDictionary, NSString;

@interface MIExtensionKitBundle : MIAppExtensionBundle {
    NSString *_extensionPointIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *extensionAttributes;

+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;

- (id)extensionPointIdentifier;
- (void).cxx_destruct;
- (BOOL)_validateDelegateClassWithError:(id *)a0;
- (BOOL)_validatePresenceOfSwiftEntrySectionInFile:(int)a0 shouldHaveSwiftEntry:(BOOL)a1 withError:(id *)a2;
- (BOOL)validateBundleMetadataWithError:(id *)a0;

@end
