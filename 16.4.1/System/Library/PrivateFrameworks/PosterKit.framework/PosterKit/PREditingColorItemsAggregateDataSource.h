@class NSArray, NSString;

@interface PREditingColorItemsAggregateDataSource : NSObject <PREditingColorItemsDataSource>

@property (copy, nonatomic) NSArray *dataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)colorItemForIndex:(unsigned long long)a0;
- (id)firstColorItemPassingTest:(id /* block */)a0;
- (unsigned long long)indexForItem:(id)a0;
- (id)initWithDataSources:(id)a0;

@end
