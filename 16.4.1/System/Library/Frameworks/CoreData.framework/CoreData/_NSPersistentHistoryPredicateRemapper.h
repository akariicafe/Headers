@class NSString;

@interface _NSPersistentHistoryPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSString *_storeID;
    BOOL _previousKeyPathExpressionWasToken;
}

+ (id)defaultInstance;

- (void)visitPredicateExpression:(id)a0;
- (id)initWithStoreIdentifier:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)visitPredicate:(id)a0;
- (void)dealloc;
- (id)createPredicateForFetchFromPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;

@end
