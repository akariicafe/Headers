@interface HealthMedicationsUI.OntologyShardStateObserver : _TtCs12_SwiftObject <HKOntologyStoreObserver> {
    void /* unknown type, empty encoding */ _shardState;
    void /* unknown type, empty encoding */ _isImported;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ ontologyStore;
    void /* unknown type, empty encoding */ settingsManager;
}

- (void)ontologyStore:(id)a0 didImportEntry:(id)a1;
- (void)ontologyStore:(id)a0 didStageEntry:(id)a1;
- (void)ontologyStoreDidReconnect:(id)a0;

@end
