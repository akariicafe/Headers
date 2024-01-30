@class PHAsset, PHAssetCollection;
@protocol PGEventEnrichment;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (readonly, nonatomic) id<PGEventEnrichment> collection;
@property (nonatomic, getter=isDebug) BOOL debug;
@property (nonatomic) BOOL forDiagnostics;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2;
- (void)_generateTitleAndSubtitleWithManager:(id)a0 result:(id /* block */)a1;

@end
