@class NSString, NBComplicationLibraryItem, NSURL, NSDate, NSNumber;

@interface NBComplicationTimelineEntry : NSObject

@property (retain, nonatomic) NSNumber *persistentID;
@property (copy, nonatomic) NSString *contentItemID;
@property (copy, nonatomic) NSString *chapterTitle;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (nonatomic, getter=isPlayStatePaused) BOOL playStatePaused;
@property (nonatomic) double progress;
@property (nonatomic) double remainingTime;
@property (retain, nonatomic) NBComplicationLibraryItem *recentAudiobook;
@property (readonly, nonatomic) NSDate *projectedStartDate;
@property (readonly, nonatomic) NSDate *projectedEndDate;
@property (nonatomic) BOOL allowOverrideOfStoppedState;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) NSDate *entryDate;

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)templateForComplicationFamily:(long long)a0;
- (id)entryForComplicationFamily:(long long)a0;
- (id)_signatureCorner;
- (id)_extraLarge;
- (id)_signatureBezel;
- (id)initForSampleContent;
- (id)_largeModular;
- (id)_smallModular;
- (id)_smallUtility;
- (id)_largeUtility;
- (id)_circularMedium:(BOOL)a0;
- (id)_signatureCircular;
- (id)_signatureRectangluar;
- (id)_graphicExtraLarge;
- (id)_progressProviderForRingComplications;
- (id)_nowPlayingProviderForFamily:(long long)a0;
- (id)_stoppedModularTextProvider;
- (id)_italicTextProviderForText:(id)a0;
- (id)_fullColorImageProviderWithImageName:(id)a0;
- (id)_gaugeTextProvider;
- (id)_gaugeProgressProvider;
- (id)_makeSignatureCircularTemplate;
- (id)_signatureBookSummaryTextProvider;
- (BOOL)_wantsPausedStateWhenStopped;
- (id)_gaugeProgressProviderWithOverride:(BOOL)a0;
- (id)initWithNoAudiobookWithRecentAudiobook:(id)a0;
- (BOOL)isSameTrackAs:(id)a0;

@end
