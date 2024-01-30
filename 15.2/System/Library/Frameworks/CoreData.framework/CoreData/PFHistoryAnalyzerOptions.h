@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {
    BOOL _automaticallyPruneTransientRecords;
    unsigned long long _transactionLimit;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
