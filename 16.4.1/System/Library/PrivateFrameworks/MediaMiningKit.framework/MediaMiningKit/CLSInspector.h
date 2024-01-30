@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject {
    NSArray *_profileClasses;
    NSMutableDictionary *_profileClassesByIdentifier;
    NSArray *_informantClasses;
    NSMutableDictionary *_informantClassesByIdentifier;
    NSMutableDictionary *_informantClassesByFamilyIdentifier;
}

+ (id)sharedInspector;
+ (void)invalidateSharedTransientCaches;
+ (void)invalidateSharedPersistentCaches;
+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+ (void)invalidateAllSharedCaches;

- (id)init;
- (void).cxx_destruct;
- (void)performInvestigation:(id)a0 progressBlock:(id /* block */)a1;
- (Class)informantClassForIdentifier:(id)a0;
- (id)informantClassesForAnyIdentifier:(id)a0;
- (id)informantClassesForFamilyIdentifier:(id)a0;
- (id)informantIdentifierForHash:(unsigned long long)a0;
- (id)informantIdentifiersForAnyIdentifier:(id)a0;
- (void)performInvestigation:(id)a0;
- (void)performInvestigation:(id)a0 options:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (Class)profileClassForIdentifier:(id)a0;
- (id)profileIdentifierForHash:(unsigned long long)a0;

@end
