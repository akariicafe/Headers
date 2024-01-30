@interface PLPersistentHistoryStats : NSObject

@property (nonatomic) long long filePageCount;
@property (nonatomic) long long transactionsPageCount;
@property (nonatomic) long long transactionStringsPageCount;
@property (nonatomic) long long changesPageCount;
@property (readonly, nonatomic) long long persistentHistoryPageCount;
@property (readonly, nonatomic) double transactionsPageCountPercent;
@property (readonly, nonatomic) double transactionStringsPageCountPercent;
@property (readonly, nonatomic) double changesPageCountPercent;
@property (readonly, nonatomic) double persistentHistoryPageCountPercent;

+ (id)statsFromDatabase:(id)a0;

- (double)_pageCountAsPercentOfFile:(long long)a0;

@end
