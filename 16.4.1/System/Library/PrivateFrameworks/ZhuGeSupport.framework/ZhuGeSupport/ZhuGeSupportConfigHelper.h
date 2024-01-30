@class NSArray, NSDictionary, NSMutableDictionary, ZhuGeSupportCache, NSMutableArray;

@interface ZhuGeSupportConfigHelper : NSObject

@property (retain) ZhuGeSupportCache *propertiesCache;
@property (readonly) NSDictionary *keysConfig;
@property (readonly) NSDictionary *aliasesMap;
@property (readonly) NSArray *flexibleList;
@property (readonly) NSDictionary *extraKeysConfig;
@property (readonly) NSDictionary *extraAliasesMap;
@property (readonly) NSArray *extraFlexibleList;
@property (readonly) NSMutableDictionary *allKeysConfig;
@property (readonly) NSMutableDictionary *allAliasesMap;
@property (readonly) NSMutableArray *allFlexibleList;

- (void).cxx_destruct;
- (id)extractPivotalConfWithError:(id *)a0;
- (id)getConfigOfKey:(id)a0 withError:(id *)a1;
- (id)getConfiguredObfuscatedKey:(id)a0 withError:(id *)a1;
- (id)getPrimarykeyOfKey:(id)a0 withError:(id *)a1;
- (id)getPropertiesOfKey:(id)a0 withError:(id *)a1;
- (id)getSubkeyOfKey:(id)a0 withError:(id *)a1;
- (id)initWithRawConfig:(id)a0 AndExtraRawConfig:(id)a1;
- (id)isKeyAlias:(id)a0 withError:(id *)a1;
- (id)pickFlexibleFromUnionizedConfig:(id)a0 withError:(id *)a1;
- (id)propertiesByKey:(id)a0 andSuperKeyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withError:(id *)a2;
- (id)propertiesOfKey:(id)a0 withError:(id *)a1;
- (id)sortAliasFromUnionizedConfig:(id)a0 withError:(id *)a1;
- (id)unionizeRawConfig:(id)a0 withError:(id *)a1;

@end
