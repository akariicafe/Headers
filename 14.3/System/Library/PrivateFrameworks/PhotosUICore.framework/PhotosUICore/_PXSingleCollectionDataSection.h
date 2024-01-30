@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) id<PXDisplayCollection> displayCollection;

- (void).cxx_destruct;
- (id)initWithDisplayCollection:(id)a0;
- (long long)count;
- (id)objectAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;

@end
