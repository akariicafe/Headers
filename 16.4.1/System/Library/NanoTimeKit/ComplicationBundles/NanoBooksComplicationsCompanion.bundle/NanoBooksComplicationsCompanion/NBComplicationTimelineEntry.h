@class NSString, NSDate, NBComplicationLibraryItem;

@interface NBComplicationTimelineEntry : NSObject

@property (copy, nonatomic) NSString *chapterTitle;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double rate;
@property (nonatomic, getter=isPlayStatePaused) BOOL playStatePaused;
@property (nonatomic) double progress;
@property (nonatomic) double remainingTime;
@property (retain, nonatomic) NBComplicationLibraryItem *recentAudiobook;
@property (readonly, nonatomic) NSDate *projectedStartDate;
@property (readonly, nonatomic) NSDate *projectedEndDate;
@property (nonatomic) BOOL allowOverrideOfStoppedState;
@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDate *entryDate;

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)_extraLarge;
- (id)_signatureCorner;
- (id)entryForComplicationFamily:(long long)a0;
- (id)templateForComplicationFamily:(long long)a0;
- (id)initWithPlayerResponse:(id)a0;
- (id)_signatureBezel;
- (id)_circularMedium:(BOOL)a0;
- (id)_fullColorImageProviderWithImageName:(id)a0;
- (id)_gaugeProgressProvider;
- (id)_gaugeProgressProviderWithOverride:(BOOL)a0;
- (id)_gaugeTextProvider;
- (id)_graphicExtraLarge;
- (id)_italicTextProviderForText:(id)a0;
- (id)_largeModular;
- (id)_largeUtility;
- (id)_makeSignatureCircularTemplate;
- (id)_nowPlayingProviderForFamily:(long long)a0;
- (id)_progressProviderForRingComplications;
- (id)_signatureBookSummaryTextProvider;
- (id)_signatureCircular;
- (id)_signatureRectangluar;
- (id)_smallModular;
- (id)_smallUtility;
- (id)_stoppedModularTextProvider;
- (BOOL)_wantsPausedStateWhenStopped;
- (id)initAsSwitcherTemplate;
- (id)initWithNoAudiobookWithRecentAudiobook:(id)a0;

@end
