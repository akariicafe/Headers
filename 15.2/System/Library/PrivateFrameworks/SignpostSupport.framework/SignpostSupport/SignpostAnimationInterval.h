@class NSSet, NSArray;

@interface SignpostAnimationInterval : SignpostInterval

@property (readonly, nonatomic) NSSet *allFirstFrameLifetimesWithCommits;
@property (retain, nonatomic) NSArray *compositeIntervals;
@property (readonly, nonatomic) NSArray *allCommits;
@property (readonly, nonatomic) NSArray *longCommits;
@property (readonly, nonatomic) NSArray *allSystemwideCommits;
@property (readonly, nonatomic) NSArray *longSystemwideCommits;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) NSArray *allTransactionLifetimes;
@property (readonly, nonatomic) NSArray *longTransactionLifetimes;
@property (readonly, nonatomic) NSArray *allFrameLatencies;
@property (readonly, nonatomic) NSArray *allContributedFrameLatencies;
@property (readonly, nonatomic) NSArray *longFrameLatencies;
@property (readonly, nonatomic) NSArray *contributedLongFrameLatencies;
@property (readonly, nonatomic) NSArray *allFrameLifetimes;
@property (readonly, nonatomic) NSArray *allContributedFrameLifetimes;
@property (readonly, nonatomic) NSArray *longFrameLifetimes;
@property (readonly, nonatomic) NSArray *longContributedFrameLifetimes;
@property (readonly, nonatomic) NSArray *allHIDLatencies;
@property (readonly, nonatomic) NSArray *longHIDLatencies;
@property (readonly, nonatomic) NSArray *allRenderServerRenders;
@property (readonly, nonatomic) NSArray *longRenderServerRenders;
@property (readonly, nonatomic) NSArray *glitches;
@property (readonly, nonatomic) NSArray *contributedGlitches;
@property (readonly, nonatomic) double glitchTimeRatio;
@property (readonly, nonatomic) double glitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *firstFrameGlitches;
@property (readonly, nonatomic) NSArray *contributedFirstFrameGlitches;
@property (readonly, nonatomic) double firstFrameGlitchTimeRatio;
@property (readonly, nonatomic) double firstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *nonFirstFrameGlitches;
@property (readonly, nonatomic) NSArray *contributedNonFirstFrameGlitches;
@property (readonly, nonatomic) double nonFirstFrameGlitchTimeRatio;
@property (readonly, nonatomic) double nonFirstFrameGlitchTimeRatioMsPerS;

+ (id)serializationTypeNumber;

- (double)durationToFirstBeginSeconds:(id)a0;
- (id)_animationStatsDescription;
- (unsigned long long)durationToFirstEndMachContinuousTime:(id)a0;
- (id)_intervalTypeString;
- (id)humanReadableType;
- (id)_statsStringForTimeIntervals:(id)a0 label:(id)a1;
- (unsigned long long)durationToFirstBeginMachContinuousTime:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_detailedFrameDescription;
- (id)_frameDescription;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1 accumulatedState:(id)a2;
- (double)_timeRatioForTimeIntervalArray:(id)a0;
- (id)initWithDictionary:(id)a0;
- (double)durationToFirstEndSeconds:(id)a0;
- (id)_poorPerfFrameDescription;
- (id)debugDescription;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;

@end
