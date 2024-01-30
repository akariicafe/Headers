@interface LinkServices._LNMetadataProviderDirect : NSObject <LNAutoShortcutsProviderInterface, LNMetadataProviderInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ requiresAssertion;
}

- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)bundlesWithError:(id *)a0;
- (id)enumsWithError:(id *)a0;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)entitiesWithError:(id *)a0;
- (id)actionsWithError:(id *)a0;
- (id)queriesWithError:(id *)a0;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)initWithXPCInterface:(id)a0 options:(long long)a1 error:(id *)a2;

@end
