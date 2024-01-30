@class PGGraph, NSArray, PHFetchResult;

@interface PGSharingSuggestionInput : NSObject {
    NSArray *_assetLocalIdentifiers;
    NSArray *_momentLocalIdentifiers;
    NSArray *_momentNodes;
    PHFetchResult *_assets;
    PHFetchResult *_moments;
}

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) NSArray *momentNodes;
@property (readonly, nonatomic) PHFetchResult *assets;
@property (readonly, nonatomic) PHFetchResult *moments;

- (void).cxx_destruct;
- (id)initWithMomentNodes:(id)a0;
- (id)description;
- (id)initWithAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 andGraph:(id)a2;

@end
