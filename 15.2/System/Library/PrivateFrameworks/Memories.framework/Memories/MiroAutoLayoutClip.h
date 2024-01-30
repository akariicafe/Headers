@class NSArray, MultiUpClip, MiroAutoEditKenBurnsController, AltClipCollection, KonaClip;

@interface MiroAutoLayoutClip : NSObject

@property (retain, nonatomic) AltClipCollection *treatmentInfo;
@property (retain, nonatomic) KonaClip *projectClip;
@property (nonatomic) int clipType;
@property (nonatomic) int preferredDirection;
@property (nonatomic) BOOL canSupportPrecedingTransition;
@property (nonatomic) BOOL canSupportMultiUp;
@property (retain, nonatomic) NSArray *multiUpPeers;
@property (retain, nonatomic) MiroAutoLayoutClip *selectedPeer;
@property (retain, nonatomic) MultiUpClip *multiUpClip;
@property (nonatomic) BOOL itemShouldHeroFeaturedPerson;
@property (nonatomic) int directionOfMovement;
@property (nonatomic) BOOL transitionAssigned;
@property (nonatomic) BOOL zoomToPersonCandidate;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) BOOL isSquare;
@property (readonly, nonatomic) int numberOfFaces;
@property (readonly, nonatomic) BOOL facesAreClose;
@property (nonatomic) BOOL durationIsFlexible;
@property (nonatomic) BOOL missedRollToBeats;
@property (nonatomic) BOOL couldSupportNUpBase;
@property (nonatomic) BOOL supportsHalf;
@property (nonatomic) BOOL supportsOneThird;
@property (nonatomic) BOOL supportsTwoThirds;
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController;

+ (BOOL)clipIsPortrait:(id)a0;
+ (BOOL)clipIsSquare:(id)a0;
+ (BOOL)clipIsPano:(id)a0;
+ (double)clipAspectRatio:(id)a0;
+ (BOOL)clipIsPortraitOrSquare:(id)a0;

- (BOOL)hasMultipleFaces;
- (id)description;
- (BOOL)isFavorite;
- (BOOL)isVideo;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEdited;
- (BOOL)isPano;
- (void)establishProjectClipType;
- (BOOL)isTransition;
- (void)establishIsPortrait;
- (void)establishIsSquare;
- (void)establishFaceInfo:(id)a0;
- (void)establishDurationFlexibility;
- (void)establishPreferredDirection;
- (void)establishFacesAreClose;
- (void)establishCanSupportPrecedingTransition;
- (int)establishRequiredTreatmentForAspect:(double)a0 polishDelegate:(id)a1;
- (void)applyAssignedTreatmentsFromRequired;
- (BOOL)clipCanZoomCrop:(id)a0;
- (id)locationForClip;
- (id)initWithKonaClip:(id)a0 polishDelegate:(id)a1 zoomToPersonCandidate:(BOOL)a2 isTitle:(BOOL)a3;
- (double)distanceToLayoutClip:(id)a0;

@end
