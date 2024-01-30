@protocol PGEventEnrichment;

@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) id<PGEventEnrichment> collection;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)initWithCollection:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2;
- (id)_locationTitleUsingKeyAssetAddressNode:(id)a0 curationAddressNodes:(id)a1;

@end
