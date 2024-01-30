@class NSDate;

@interface PLPersistentHistoryStats : NSObject

@property (nonatomic) long long filePageCount;
@property (nonatomic) long long unusedPageCount;
@property (readonly, nonatomic) long long payloadPageCount;
@property (nonatomic) long long transactionsPageCount;
@property (nonatomic) long long transactionStringsPageCount;
@property (nonatomic) long long changesPageCount;
@property (readonly, nonatomic) long long persistentHistoryPageCount;
@property (nonatomic) long long transactionCount;
@property (copy, nonatomic) NSDate *earliestTransactionDate;
@property (readonly, nonatomic) long long daysSinceEarliestTransaction;
@property (readonly, nonatomic) double transactionsPageCountPercent;
@property (readonly, nonatomic) double transactionStringsPageCountPercent;
@property (readonly, nonatomic) double changesPageCountPercent;
@property (readonly, nonatomic) double persistentHistoryPageCountPercent;
@property (readonly, nonatomic) double transactionsPageCountPercentOfPayload;
@property (readonly, nonatomic) double transactionStringsPageCountPercentOfPayload;
@property (readonly, nonatomic) double changesPageCountPercentOfPayload;
@property (readonly, nonatomic) double persistentHistoryPageCountPercentOfPayload;

+ (BOOL)fetchPageCountsOfPersistentHistoryTablesFromDatabase:(id)a0 intoStats:(id)a1;
+ (BOOL)fetchEarliestTransactionDateFromDatabase:(id)a0 intoStats:(id)a1;
+ (BOOL)fetchTotalPageCountFromDatabase:(id)a0 intoStats:(id)a1;
+ (BOOL)fetchTransactionCountFromDatabase:(id)a0 intoStats:(id)a1;
+ (BOOL)fetchUnusedPageCountFromDatabase:(id)a0 intoStats:(id)a1;
+ (id)statsFromDatabase:(id)a0;

- (void).cxx_destruct;
- (double)_pageCountAsPercentOfFile:(long long)a0;
- (double)_pageCountAsPercentOfPayload:(long long)a0;

@end
