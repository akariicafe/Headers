@class NSString;

@interface _NSPersistentHistoryPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSString *_storeID;
}

+ (id)defaultInstance;

- (void)dealloc;
- (void)visitPredicateExpression:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (id)initWithStoreIdentifier:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0;
- (void)visitPredicate:(id)a0;

@end
