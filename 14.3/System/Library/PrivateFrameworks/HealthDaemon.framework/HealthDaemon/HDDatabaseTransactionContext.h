@class NSSet, HDDatabaseTransactionContextStatistics, NSMutableSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
}

@property (readonly, nonatomic) BOOL skipJournalMerge;
@property (readonly, nonatomic) BOOL requiresNewDatabaseConnection;
@property (readonly, copy, nonatomic) NSSet *accessibilityAssertions;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) long long journalType;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) BOOL requiresWrite;
@property (readonly, nonatomic) BOOL requiresProtectedData;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForReadingProtectedData;
+ (id)highPriorityContext;
+ (id)contextForReading;
+ (id)contextForWriting;
+ (id)_cachedContextForOptions:(unsigned long long)a0;
+ (id)contextForWritingProtectedData;

- (id)_initWithOptions:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsContext:(id)a0 error:(id *)a1;
- (id)copyForReadingProtectedData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_applyOptions:(unsigned long long)a0 enable:(BOOL)a1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithOptions:(unsigned long long)a0 journalType:(long long)a1 cacheScope:(long long)a2 assertions:(id)a3 statistics:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)copyForWriting;
- (id)mergedContextWithContext:(id)a0 error:(id *)a1;
- (id)copyForWritingProtectedData;

@end
