@class NSArray;

@interface DNDSMutableModeAssertionStore : DNDSModeAssertionStore

@property (copy, nonatomic) NSArray *assertions;
@property (copy, nonatomic) NSArray *invalidations;
@property (copy, nonatomic) NSArray *invalidationRequests;

- (void)setAssertions:(id)a0;
- (void)resolveSourcesForSyncFromPairedDevice:(id)a0;
- (void)sanitizeDatesForThreshold:(id)a0;
- (void)setInvalidations:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)downgradeAssertionsIfNeededForSyncToPairedDevice:(id)a0 dataSource:(id)a1 syncManager:(id)a2;
- (void)updateConfigurationModificationDatesWithDataSource:(id)a0 syncManager:(id)a1;
- (void)unresolveSourcesForSyncToPairedDevice:(id)a0;
- (void)filterForSyncToPairedDevice:(id)a0 clientDetailsProvider:(id)a1;
- (void)setInvalidationRequests:(id)a0;

@end
