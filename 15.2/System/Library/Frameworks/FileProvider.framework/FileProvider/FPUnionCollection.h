@class NSArray;

@interface FPUnionCollection : FPItemCollection

@property (retain, nonatomic) NSArray *collections;

- (id)description;
- (void).cxx_destruct;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (id)initWithCollections:(id)a0;

@end
