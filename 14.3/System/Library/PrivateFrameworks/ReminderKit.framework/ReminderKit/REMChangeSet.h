@class NSError, NSArray;

@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isTruncated;
@property (retain, nonatomic) NSArray *inserts;
@property (retain, nonatomic) NSArray *updates;
@property (retain, nonatomic) NSArray *deletes;
@property (retain, nonatomic) NSArray *filterByTransactionAuthorStrings;
@property (nonatomic) BOOL filterByTransactionAuthorsIsExclusion;
@property (retain, nonatomic) NSArray *filteredTransactions;
@property (readonly, nonatomic) NSArray *transactions;

+ (id)errorChangeSetWithError:(id)a0;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)consolidateAndFilterChangesWithTransactionAuthors:(id)a0 isExclusion:(BOOL)a1;
- (BOOL)_filterAndFlattenAndConsolidateChanges;
- (id)initWithChangeTransactions:(id)a0;
- (BOOL)applyFilterByTransactionAuthors:(id)a0 isExclusion:(BOOL)a1;
- (BOOL)enumerateChanges:(long long)a0 forModelsOfClass:(Class)a1 withBlock:(id /* block */)a2;
- (id)lastChangeTokenForAccountID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
