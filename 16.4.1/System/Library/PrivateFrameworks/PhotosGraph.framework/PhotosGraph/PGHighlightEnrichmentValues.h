@class NSString, NSArray, NSDictionary, PHAsset, NSNumber, NSMapTable;
@protocol PGHighlightModel;

@interface PGHighlightEnrichmentValues : NSObject

@property (readonly, nonatomic) id<PGHighlightModel> highlight;
@property (nonatomic) BOOL clearCurations;
@property (nonatomic) double promotionScore;
@property (copy, nonatomic) NSString *smartDescriptionPrivate;
@property (copy, nonatomic) NSString *verboseSmartDescriptionPrivate;
@property (copy, nonatomic) NSString *smartDescriptionShared;
@property (copy, nonatomic) NSString *verboseSmartDescriptionShared;
@property (copy, nonatomic) NSString *smartDescriptionMixed;
@property (copy, nonatomic) NSString *verboseSmartDescriptionMixed;
@property (retain, nonatomic) PHAsset *keyAssetPrivate;
@property (retain, nonatomic) PHAsset *keyAssetShared;
@property (copy, nonatomic) NSNumber *mixedSharingCompositionKeyAssetRelationshipValue;
@property (retain, nonatomic) NSArray *extendedCuration;
@property (retain, nonatomic) NSArray *summaryCuration;
@property (retain, nonatomic) NSDictionary *momentTitleByMomentUUID;
@property (nonatomic) unsigned long long mood;
@property (retain, nonatomic) NSMapTable *visibilityScoreByAsset;
@property (nonatomic) unsigned short enrichmentState;
@property (readonly) BOOL hasChanges;

- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0;
- (BOOL)smartDescriptionMixedUpdated;
- (BOOL)smartDescriptionPrivateUpdated;
- (BOOL)smartDescriptionSharedUpdated;
- (BOOL)verboseSmartDescriptionMixedUpdated;
- (BOOL)verboseSmartDescriptionPrivateUpdated;
- (BOOL)verboseSmartDescriptionSharedUpdated;

@end
