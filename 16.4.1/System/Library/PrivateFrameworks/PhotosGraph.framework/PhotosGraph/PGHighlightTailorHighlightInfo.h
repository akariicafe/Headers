@class NSString, NSSet, PGGraphHighlightNode, NSDictionary, CLSInvestigationPhotoKitFeeder, NSArray, PGHighlightTailorContext;
@protocol PGHighlightModel;

@interface PGHighlightTailorHighlightInfo : NSObject

@property (retain, nonatomic) NSSet *meaningLabels;
@property (readonly, nonatomic) id<PGHighlightModel> highlight;
@property (readonly, nonatomic) PGGraphHighlightNode *highlightNode;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSDictionary *meaningLabelsByChildHighlightUUID;
@property (readonly, nonatomic) BOOL babyIsPresent;
@property (readonly, nonatomic) BOOL petIsPresent;
@property (readonly, nonatomic) CLSInvestigationPhotoKitFeeder *feeder;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned long long numberOfExtendedAssets;
@property (retain, nonatomic) NSArray *uuidsOfEligibleAssets;
@property (retain, nonatomic) NSArray *childHighlights;
@property (readonly) PGHighlightTailorContext *highlightTailorContext;
@property (copy, nonatomic) NSString *keyAssetPrivateUUID;
@property (copy, nonatomic) NSString *keyAssetSharedUUID;

- (id)description;
- (void).cxx_destruct;
- (id)assetsForSharingFilter:(unsigned short)a0;
- (id)initForTestingWithHighlight:(id)a0;
- (id)initWithHighlight:(id)a0 graph:(id)a1 highlightTailorContext:(id)a2;
- (id)uuidsOfRequiredAssetsForSharingFilter:(unsigned short)a0;

@end
