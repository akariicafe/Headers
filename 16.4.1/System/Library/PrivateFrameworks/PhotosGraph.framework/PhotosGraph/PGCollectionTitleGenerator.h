@class NSSet, PGTitleGenerationContext, PHAsset, PHAssetCollection, PGTitleTuple;
@protocol PGEventEnrichment;

@interface PGCollectionTitleGenerator : NSObject {
    PGTitleGenerationContext *_titleGenerationContext;
}

@property (retain, nonatomic) id<PGEventEnrichment> collection;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) NSSet *whitelistedMeaningLabels;
@property (retain, nonatomic) PGTitleTuple *titleTuple;
@property (nonatomic) BOOL forDiagnostics;

- (void).cxx_destruct;
- (void)_generateTitleTuples;
- (id)_meaningLabelForTitle;
- (id)_sortedMeaningLabels;
- (id)initWithCollection:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2 titleGenerationContext:(id)a3;
- (id)initWithCollection:(id)a0 titleGenerationContext:(id)a1;
- (id)initWithCollection:(id)a0 whitelistedMeaningLabels:(id)a1 titleGenerationContext:(id)a2;

@end
