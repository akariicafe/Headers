@class NSArray, NSSet;

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying>

@property (nonatomic) unsigned long long transactionType;
@property (copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems;
@property (copy, nonatomic) NSSet *deletedArticleIDs;

+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)a0 deletedArticleIDs:(id)a1;
+ (void)_mergeItem:(id)a0 intoItem:(id)a1;
+ (id)transactionOfIdentity;
+ (id)transactionToClearSeenArticles;
+ (id)collapsedTransactionOfTransactions:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTransactionType:(unsigned long long)a0 insertedOrUpdatedHistoryItems:(id)a1 deletedArticleIDs:(id)a2;
- (void)_mergeItem:(id)a0 intoItem:(id)a1;
- (id /* block */)todayPrivateDataAccessor;

@end
