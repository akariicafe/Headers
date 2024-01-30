@class NSSet, NSUserDefaults, SGContentAdmissionKVOObserver;

@interface SGContentAdmission : NSObject {
    NSSet *_disabledBundleIdentifiers;
    NSUserDefaults *_defaults;
    SGContentAdmissionKVOObserver *_kvoObserver;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)isSupportedSearchableItemBundleIdentifier:(id)a0;
+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)a0;
+ (void)migrateForTests;
+ (BOOL)shouldAdmitContentFromBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_disableBundleIdentifier:(id)a0;
- (void)_refreshDisabledBundleIds;
- (void)_migrateIfNeededWithCompletion:(id /* block */)a0;
- (void)_clearTestSettings;
- (BOOL)_shouldAdmitContentFromBundleIdentifier:(id)a0;

@end
