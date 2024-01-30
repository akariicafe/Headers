@class NSSet;

@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer

@property (copy, nonatomic) NSSet *unavailableItemIdentifiers;

- (void).cxx_destruct;
- (id)objectForData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)_itemsWithDictionary:(id)a0;

@end
