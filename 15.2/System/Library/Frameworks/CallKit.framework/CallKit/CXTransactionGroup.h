@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CXTransactionGroup : NSObject

@property (readonly, nonatomic) NSMutableDictionary *callSourceIdentifierToTransaction;
@property (readonly, nonatomic) NSMutableArray *mutableCallSources;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) NSArray *callSources;
@property (readonly, copy, nonatomic) NSArray *transactions;
@property (readonly, copy, nonatomic) NSArray *allActions;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addAction:(id)a0 forCallSource:(id)a1;
- (id)transactionForCallSource:(id)a0;

@end
