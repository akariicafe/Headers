@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation

@property (copy, nonatomic) NSArray *objectIDURIsToIndex;

- (void)main;
- (void).cxx_destruct;
- (id)initWithSearchableIndex:(id)a0 dataSources:(id)a1;
- (id)initWithSearchableIndex:(id)a0 dataSources:(id)a1 objectIDURIsToIndex:(id)a2;

@end
