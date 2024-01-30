@class NSSet, PGTitleGeneratorDateMatching, PGTitle, PHAsset, PHAssetCollection, NSLocale;

@interface PGTitleGenerator : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) NSSet *usedLocationNodes;
@property (readonly, nonatomic) PGTitleGeneratorDateMatching *dateMatching;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) PGTitle *title;
@property (readonly, nonatomic) PGTitle *subtitle;
@property (nonatomic) unsigned long long preferredTitleType;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic) BOOL isForHighlight;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)initWithMomentNodes:(id)a0 type:(long long)a1;
- (BOOL)_triggerDefaultTitleGenerationIfNil;
- (id)initWithMomentNode:(id)a0 referenceDateInterval:(id)a1 keyAsset:(id)a2 curatedAssetCollection:(id)a3 assetCollection:(id)a4 type:(long long)a5;
- (id)initWithMomentNodes:(id)a0 referenceDateInterval:(id)a1 keyAsset:(id)a2 curatedAssetCollection:(id)a3 assetCollection:(id)a4 type:(long long)a5;
- (id)initWithMomentNode:(id)a0 type:(long long)a1;
- (void)_generateTitleAndSubtitle;
- (id)_defaultTitle;
- (id)_defaultLocationTitle;
- (id)_defaultTimeTitle;
- (id)_splitTimeTitles;
- (unsigned long long)_allowedTimeTitleFormats;
- (id)_addressNodeFromKeyAsset;
- (id)_addressNodesFromCuratedAssetCollection;

@end
