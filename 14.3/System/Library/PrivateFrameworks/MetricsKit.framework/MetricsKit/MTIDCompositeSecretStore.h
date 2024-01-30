@class NSString, NSMutableDictionary;

@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore>

@property (retain, nonatomic) NSMutableDictionary *stores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)debugInfo;
- (id)resetSchemes:(id)a0 options:(id)a1;
- (id)maintainSchemes:(id)a0 options:(id)a1;
- (id)secretForScheme:(id)a0 options:(id)a1;
- (void)clearLocalData;
- (id)storeKeyForScheme:(id)a0;
- (id)secretStoreForScheme:(id)a0;
- (id)schemesGroupedByStore:(id)a0;

@end
