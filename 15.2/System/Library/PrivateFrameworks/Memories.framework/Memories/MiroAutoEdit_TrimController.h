@class MiroAutoEditLogger, NSSet, NSDictionary, Project, MiroBlueprint;

@interface MiroAutoEdit_TrimController : NSObject

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) BOOL titleIsSupported;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (nonatomic) long long durationRange;
@property (retain, nonatomic) NSSet *suggestions;
@property (nonatomic) int duration;
@property (nonatomic) int lastClipInPoint;
@property (nonatomic) int lastClipOutPoint;
@property (readonly, nonatomic) MiroAutoEditLogger *logger;
@property (nonatomic) BOOL useNonSpecialDurations;
@property (nonatomic) BOOL allowMoreThanMaxVideo;

+ (id)rangeModelsBySplittingRangeModels:(id)a0 outsideRange:(id)a1;

- (void).cxx_destruct;
- (id)initWithProject:(id)a0 blueprint:(id)a1 titleIsSupported:(BOOL)a2 freezeRanges:(id)a3 duration:(double)a4 durationRange:(long long)a5 suggestions:(id)a6;
- (id)layoutProject;
- (id)_saveFreezeBits;
- (void)setupSongDuration;
- (BOOL)clipIsTitleCard:(id)a0;
- (void)setDuration:(int)a0 andStartTimeForClip:(id)a1;
- (int)durationOfUserTrimForClip:(id)a0;
- (void)_fitToDuration;
- (void)_clipClip:(id)a0;
- (id)_rangesForClipIncorporatingUserTrim:(id)a0;
- (int)minimumBlueprintDurationForClip:(id)a0;
- (int)maximumBlueprintDurationForClip:(id)a0;
- (int)shrinkAndStretchClips:(id)a0;
- (void)calcLastClipInPointAndOutPoint;

@end
