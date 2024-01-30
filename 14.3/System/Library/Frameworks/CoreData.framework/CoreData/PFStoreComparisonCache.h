@class NSMutableDictionary;

@interface PFStoreComparisonCache : NSObject {
    NSMutableDictionary *_identifierToStoreUUIDToObjectID;
    NSMutableDictionary *_storeUUIDToIdentifiers;
}

- (id)init;
- (void)dealloc;
- (id)objectIDForIdentifier:(id)a0 inStore:(id)a1;
- (void)setObjectID:(id)a0 forIdentifier:(id)a1;
- (id)identifiersForStore:(id)a0;

@end
