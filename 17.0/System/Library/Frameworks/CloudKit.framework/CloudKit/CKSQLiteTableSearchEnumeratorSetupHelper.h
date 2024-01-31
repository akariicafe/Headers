@class NSArray, NSPredicate, NSNumber, NSMutableArray;

@interface CKSQLiteTableSearchEnumeratorSetupHelper : NSObject <CKSQLiteTableObjectMatchingSetup, CKSQLiteTablePredicateSetup> {
    NSMutableArray *_orderByProperties;
}

@property (retain, nonatomic) NSArray *fetchedProperties;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSPredicate *searchPredicate;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;

- (void)orderAscendingByProperty:(id)a0;
- (void)setupStatement:(id)a0;
- (void).cxx_destruct;
- (void)orderDescendingByProperty:(id)a0;

@end
