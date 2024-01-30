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

- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)readPreferenceValue:(id)a0;
- (id)init;
- (id)specifiersForSpecifier:(id)a0 observer:(id)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)reloadSpecifiers;
- (void)addObserver:(id)a0;
- (id)observers;
- (id)specifierForID:(id)a0;
- (void)loadSpecifiers;
- (id)observersOfClass:(Class)a0;
- (void)enumerateObserversOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (BOOL)areSpecifiersLoaded;
- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (void)performUpdates:(id)a0;
- (void)performUpdatesAnimated:(BOOL)a0 usingBlock:(id /* block */)a1;

@end
