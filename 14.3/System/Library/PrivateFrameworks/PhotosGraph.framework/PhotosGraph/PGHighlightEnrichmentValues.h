@class NSString, NSArray, NSDictionary, PHAsset, NSMapTable;
@protocol PGHighlightModel;

@interface PGHighlightEnrichmentValues : NSObject

@property (readonly) id<PGHighlightModel> highlight;
@property (nonatomic) BOOL clearCurations;
@property (nonatomic) double promotionScore;
@property (copy, nonatomic) NSString *smartDescription;
@property (copy, nonatomic) NSString *dateDescription;
@property (copy, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) NSArray *extendedCuration;
@property (retain, nonatomic) NSDictionary *curatedAssetsByCurationType;
@property (retain, nonatomic) NSDictionary *momentTitleByMomentUUID;
@property (nonatomic) unsigned long long mood;
@property (retain, nonatomic) NSMapTable *visibilityScoreByAsset;
@property (nonatomic) unsigned short enrichmentState;
@property (readonly) BOOL hasChanges;

- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0;

@end
