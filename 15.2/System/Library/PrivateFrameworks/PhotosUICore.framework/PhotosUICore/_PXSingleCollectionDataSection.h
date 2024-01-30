@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) id<PXDisplayCollection> displayCollection;

- (id)objectAtIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)indexOfCollection:(id)a0;
- (long long)count;
- (id)initWithDisplayCollection:(id)a0;

@end
