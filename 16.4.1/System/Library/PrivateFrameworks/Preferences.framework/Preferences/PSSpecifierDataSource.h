@class NSString, NSMutableArray, NSMutableSet;

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource> {
    NSMutableSet *_observerRefs;
    BOOL _specifiersLoaded;
}

@property (readonly, nonatomic) NSMutableArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)loadSpecifiersFromPlist:(id)a0 inBundle:(id)a1 target:(id)a2 stringsTable:(id)a3;

- (void)reloadSpecifiers;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)observers;
- (id)init;
- (id)specifierForID:(id)a0;
- (void).cxx_destruct;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)performUpdates:(id)a0;
- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (BOOL)areSpecifiersLoaded;
- (void)enumerateObserversOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)loadSpecifiers;
- (id)observersOfClass:(Class)a0;
- (void)performUpdatesAnimated:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)specifiersForSpecifier:(id)a0 observer:(id)a1;

@end
