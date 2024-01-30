@class UIColor, NSString, NSArray, BurstClipStyle, PHAsset;

@interface BurstClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *containedClips;
@property (retain, nonatomic) NSArray *allSourceClips;
@property (retain, nonatomic) BurstClipStyle *burstClipStyle;
@property (nonatomic) unsigned long long allowedBurstStyles;
@property (nonatomic) unsigned long long burstStyle;
@property (retain, nonatomic) UIColor *threeUpStyleGapColor;
@property (retain, nonatomic) UIColor *threeUpStylePopBackgroundColor;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (nonatomic) double minimumVideoDuration;
@property (nonatomic) double idealVideoDuration;
@property (readonly, nonatomic) double minimumDuration;
@property (readonly, nonatomic) double idealDuration;
@property (readonly, nonatomic) double maximumDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDuration:(int)a0;
- (BOOL)isPhoto;
- (BOOL)isBurst;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)aspectRatio;
- (void)setAltAspect:(double)a0;
- (double)autoEditShortestDurationWithBlueprint:(id)a0;
- (double)autoEditLongestDurationWithBlueprint:(id)a0;
- (id)representingClip;
- (id)pickedKBClips;
- (void)setMinimumPhotoDuration:(double)a0;
- (void)setIdealPhotoDuration:(double)a0;
- (id)supportedBurstStylesArray;
- (id)bestClipsForClipCount:(unsigned long long)a0;
- (id)pickedIndices;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (id)initWithKenBurnsClip:(id)a0 sourceClips:(id)a1;
- (id)descriptionOfBurstStyle;
- (unsigned long long)supportedBurstStyles;
- (void)fetchIfNeeded;
- (id)userPickedIndices;
- (id)autoPickedIndices;
- (unsigned long long)lastInterestingIndex;
- (id)indicesWithBurstSelectionType:(unsigned long long)a0;
- (id)lastInterestingClip;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;

@end
