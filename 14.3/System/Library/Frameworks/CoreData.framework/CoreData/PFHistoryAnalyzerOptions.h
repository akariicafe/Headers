@interface PFHistoryAnalyzerOptions : NSObject <NSCopying>

@property (nonatomic) BOOL automaticallyPruneTransientRecords;
@property (nonatomic) unsigned long long transactionLimit;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
