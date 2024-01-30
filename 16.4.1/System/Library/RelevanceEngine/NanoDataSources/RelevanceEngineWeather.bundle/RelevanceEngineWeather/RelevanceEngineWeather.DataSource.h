@class NSString, NSArray;

@interface RelevanceEngineWeather.DataSource : REElementDataSource {
    void /* unknown type, empty encoding */ $__lazy_storage_$_model;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_invalidationScheduler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_morningRoutineRelevanceProvider;
}

@property (class, nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (class, nonatomic, readonly) NSString *bundleIdentifier;

@property (nonatomic, readonly) NSArray *supportedSections;

+ (BOOL)wantsLocationInUseAsserton;

- (void)pause;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;

@end
