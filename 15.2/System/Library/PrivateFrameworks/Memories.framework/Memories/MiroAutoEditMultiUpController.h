@class MiroAutoEditProjectPolish, Project, NSArray, NSDictionary, MiroAutoEditKenBurnsController, NSMutableArray, MiroPickList, MiroBlueprint;

@interface MiroAutoEditMultiUpController : NSObject

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) BOOL memoryTypeDisablesCropping;
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges;
@property (weak, nonatomic) MiroPickList *picklist;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain, nonatomic) NSArray *chronologicallyOrderedAssets;
@property (nonatomic) NSArray *projectLayoutClips;
@property (retain, nonatomic) NSMutableArray *selectedPeers;
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController;
@property (retain, nonatomic) MiroAutoEditProjectPolish *polishController;
@property (nonatomic) unsigned long long altStyle;

- (void).cxx_destruct;
- (id)bestPeersBetweenClip:(id)a0 and:(id)a1 withCurrent:(id)a2;
- (BOOL)clipIsMultiCandidate:(id)a0;
- (id)appropriateDistancePeersFrom:(id)a0 comparingTo:(id)a1;
- (id)selectLayoutPeerFrom:(id)a0;
- (int)multiUpTypeForLayoutClip:(id)a0 andPeer:(id)a1;
- (void)prepareAltClip:(id)a0 andClip:(id)a1 fromSelectedPeer:(id)a2 forAspect:(double)a3;
- (void)adjustKBRectanglesForClip:(id)a0 animationStyle:(unsigned long long)a1 aspect:(double)a2;
- (BOOL)selectedPeersContains:(id)a0;
- (id)allowedAssetsChronologically;
- (id)pickBetweenClipA:(id)a0 andClipB:(id)a1 forLayoutClip:(id)a2;
- (BOOL)findMultiUpPeers:(id)a0 forLayoutClip:(id)a1;
- (void)evaluatePossilbeInEditMultiUpPeers:(id)a0 forLayoutClip:(id)a1;
- (void)createAndReplaceMultiUpForLayoutClip:(id)a0;
- (void)ensureMultiUpMovieClipIsFirstClip:(id)a0;
- (BOOL)peer:(id)a0 couldSupportAsset:(id)a1;

@end
