@class NSMutableDictionary;

@interface KGDatabaseNameCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _loaded;
    NSMutableDictionary *_labelIdByName;
    NSMutableDictionary *_labelNameById;
    NSMutableDictionary *_attrIdByPropertyName;
    NSMutableDictionary *_propertyNameByAttrId;
    unsigned long long _useCount;
}

- (void)addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (id)labelIdentifierByName:(id)a0 database:(id)a1;
- (id)attrIdentifierByPropertyName:(id)a0 database:(id)a1;
- (void)_loadCacheIfNeeded:(id)a0;
- (id)propertyNameByIdentifier:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)unloadCache;
- (void)_addPropertyName:(id)a0 identifier:(id)a1;
- (void)addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)retainCache;
- (void)_addLabelName:(id)a0 identifier:(id)a1;
- (id)labelNameByIdentifier:(id)a0 database:(id)a1;
- (BOOL)releaseCache;

@end
