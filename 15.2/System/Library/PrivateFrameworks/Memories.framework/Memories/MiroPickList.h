@class NSArray, NSSet, NSDictionary;

@interface MiroPickList : NSObject <NSCopying> {
    NSArray *_sourceAssets;
}

@property (retain, nonatomic) NSArray *sourceAssets;
@property (retain, nonatomic) NSArray *sourceOrder;
@property (retain, nonatomic) NSArray *pickOrder;
@property (retain, nonatomic) NSArray *splitOrder;
@property (retain, nonatomic) NSArray *scoreOrder;
@property (retain, nonatomic) NSArray *dateOrder;
@property (retain, nonatomic) NSArray *adjustedPickOrder;
@property (retain, nonatomic) NSArray *frozenSourceAssets;
@property (retain, nonatomic) NSArray *frozenSourceOrder;
@property (retain, nonatomic) NSArray *frozenAdjustedPickOrder;
@property (nonatomic) BOOL calculatingPickOrder;
@property (retain, nonatomic) NSSet *requiredAssetIDs;
@property (retain, nonatomic) NSSet *disallowedAssetIDs;
@property (retain, nonatomic) NSSet *photosCuratedAssetIDs;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (nonatomic) BOOL prioritizeCuratedSetAssets;
@property (copy, nonatomic) NSDictionary *specialInfo;
@property unsigned long long memoryCategory;
@property unsigned long long memorySubcategory;
@property (nonatomic) BOOL skipDistanceCalculation;
@property (nonatomic) BOOL penalizeNonLocalAssets;
@property (readonly, nonatomic) int freezeState;
@property (readonly, nonatomic) BOOL isCompelling;
@property (readonly, nonatomic) int idealCount;
@property (readonly, nonatomic) int countAtOrAboveBadT;

- (void)_reset;
- (id)people;
- (id)photoLibrary;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mediaAnalyzer;
- (id)classifications;
- (id)scenesUpToCount:(long long)a0 localOnly:(BOOL)a1;
- (id)initWithAssets:(id)a0 memoryCategory:(unsigned long long)a1 memorySubcategory:(unsigned long long)a2;
- (id)assetsUpToSceneCount:(long long)a0;
- (void)calculateFullPickList;
- (int)countAtTValue:(double)a0;
- (BOOL)calculateFreezeFromFrozenSourceAssets;
- (id)sourceOrderFromSourceAssets;
- (id)pickOrderFromSourceOrder;
- (void)calculatePickListFromVPFrameworkResults;
- (id)expandVideoAssetsAndConvertToScenes:(id)a0;
- (id)sourceOrderFromSourceAssetsViaNewAPI;
- (id)sourceOrderFromSourceAssetsViaOldAPI;
- (id)sourceOrderFromSourceAssetsViaNewAPIStoppingAtCompelling:(BOOL *)a0;
- (id)rangesForAssets:(id)a0;
- (void)updateAssetsWithSpecialInfo;
- (id)highestScoringItemFromIndex:(long long)a0 lookingRight:(BOOL)a1;
- (id)highestScoringItemToTheRightFromIndex:(long long)a0;
- (id)highestScoringItemToTheLeftFromIndex:(long long)a0;
- (id)_computeAdjustedPickOrder;
- (void)_assignTrimRangesIntelligentlyToPickInfos:(id)a0;
- (double)_fractionOfPickInfo:(id)a0 coveredByRanges:(id)a1;
- (id)_pickInfosForAssetID:(id)a0;
- (void)_assignTrimRangesChronologicallyToPickInfos:(id)a0;
- (id)splitDistancesForAssetID:(id)a0;

@end
