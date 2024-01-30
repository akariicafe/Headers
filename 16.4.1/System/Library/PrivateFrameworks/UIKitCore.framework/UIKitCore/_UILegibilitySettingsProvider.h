@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject

@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) double mostRecentBrightness;
@property (nonatomic) double accumulatedBrightness;
@property (nonatomic) double mostRecentContrast;
@property (nonatomic) double accumulatedContrast;
@property (nonatomic) double mostRecentLuminance;
@property (nonatomic) double accumulatedLuminance;
@property (nonatomic) double mostRecentSaturation;
@property (nonatomic) double accumulatedSaturation;
@property (nonatomic) BOOL hasContrast;
@property (nonatomic) BOOL accumulatorIsPrimed;
@property (nonatomic) double nextChangeBarrier;
@property (nonatomic) long long currentStyle;

+ (long long)styleForContentColor:(id)a0 contrast:(double)a1;
+ (long long)styleForContentColor:(id)a0;

- (id)settings;
- (BOOL)accumulateChangesToContentColor:(id)a0 contrast:(double)a1;
- (BOOL)accumulateChangesToContentColor:(id)a0;
- (void)dealloc;
- (void)clearContentColorAccumulator;

@end
