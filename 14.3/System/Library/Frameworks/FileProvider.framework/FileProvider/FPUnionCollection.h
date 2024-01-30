@class NSArray;

@interface FPUnionCollection : FPItemCollection

@property (retain, nonatomic) NSArray *collections;

- (void).cxx_destruct;
- (id)initWithCollections:(id)a0;
- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)a0;

@end
