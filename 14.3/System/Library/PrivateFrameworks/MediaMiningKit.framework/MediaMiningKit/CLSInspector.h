@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject {
    NSArray *_profileClasses;
    NSMutableDictionary *_profileClassesByIdentifier;
    NSArray *_informantClasses;
    NSMutableDictionary *_informantClassesByIdentifier;
    NSMutableDictionary *_informantClassesByFamilyIdentifier;
}

+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+ (void)invalidateSharedTransientCaches;
+ (void)invalidateSharedPersistentCaches;
+ (void)invalidateAllSharedCaches;
+ (id)sharedInspector;

- (id)init;
- (id)informantClassesForAnyIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)informantIdentifierForHash:(unsigned long long)a0;
- (Class)profileClassForIdentifier:(id)a0;
- (void)performInvestigation:(id)a0 options:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (id)profileIdentifierForHash:(unsigned long long)a0;
- (void)performInvestigation:(id)a0;
- (Class)informantClassForIdentifier:(id)a0;
- (id)informantIdentifiersForAnyIdentifier:(id)a0;
- (id)informantClassesForFamilyIdentifier:(id)a0;
- (void)performInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
