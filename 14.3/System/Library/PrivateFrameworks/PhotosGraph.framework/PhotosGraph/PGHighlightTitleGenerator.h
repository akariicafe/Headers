@class PHAssetCollection, PHAsset, PGTitleTuple;
@protocol PGEventEnrichment;

@interface PGHighlightTitleGenerator : NSObject

@property (retain, nonatomic) id<PGEventEnrichment> collection;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) BOOL createVerboseTitle;
@property (retain, nonatomic) PGTitleTuple *titleTuple;

+ (BOOL)collectionContainsAppleEvent:(id)a0;
+ (id)commonMeaningLabelForTitleUsingMomentNodes:(id)a0;
+ (id)meaningLabelsSortedByPriority;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 curatedAssetCollection:(id)a1 keyAsset:(id)a2 createVerboseTitle:(BOOL)a3;
- (void)_generateTitleTuples;

@end
