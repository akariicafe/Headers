@class NSSet, PHAsset, PHAssetCollection, PGTitleTuple;
@protocol PGEventEnrichment;

@interface PGCollectionTitleGenerator : NSObject

@property (retain, nonatomic) id<PGEventEnrichment> collection;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) NSSet *whitelistedMeaningLabels;
@property (retain, nonatomic) PGTitleTuple *titleTuple;
@property (nonatomic) BOOL forDiagnostics;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (void)_generateTitleTuples;
- (id)initWithCollection:(id)a0 whitelistedMeaningLabels:(id)a1;
- (id)initWithCollection:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2;
- (id)_meaningLabelForTitle;
- (id)_sortedMeaningLabels;

@end
