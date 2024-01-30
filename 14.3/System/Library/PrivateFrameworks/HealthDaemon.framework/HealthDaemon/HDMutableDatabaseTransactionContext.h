@class HDDatabaseTransactionContextStatistics;

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (nonatomic) BOOL skipJournalMerge;
@property (nonatomic) BOOL requiresNewDatabaseConnection;
@property (nonatomic) long long journalType;
@property (nonatomic) long long cacheScope;
@property (nonatomic) BOOL requiresWrite;
@property (nonatomic) BOOL requiresProtectedData;
@property (nonatomic) BOOL highPriority;
@property (retain, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

- (void)setStatistics:(id)a0;
- (void)setSkipJournalMerge:(BOOL)a0;
- (void)setHighPriority:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRequiresWrite:(BOOL)a0;
- (void)setCacheScope:(long long)a0;
- (void)addAccessibilityAssertion:(id)a0;
- (void)setRequiresProtectedData:(BOOL)a0;
- (void)setRequiresNewDatabaseConnection:(BOOL)a0;
- (void)setJournalType:(long long)a0;

@end
