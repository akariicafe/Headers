@class NSSet, PGGraphHighlightNode, NSDictionary, CLSInvestigationPhotoKitFeeder, NSArray, NSString;
@protocol PGHighlightModel;

@interface PGHighlightTailorContext : NSObject

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
@property (retain, nonatomic) NSArray *childHighlights;
@property (retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers;
@property (copy, nonatomic) NSString *keyAssetUUID;

- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0 forManager:(id)a1;
- (id)initForTestingWithHighlight:(id)a0;

@end
