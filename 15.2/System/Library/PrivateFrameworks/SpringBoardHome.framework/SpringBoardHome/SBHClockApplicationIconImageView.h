@class NSString, UIImage, CALayer, NSDate;

@interface SBHClockApplicationIconImageView : SBLiveIconImageView <SBDateTimeOverrideObserver> {
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_hourMinuteDot;
    CALayer *_secondDot;
    unsigned int _jitterSkips;
    UIImage *_mappedContentsImage;
    UIImage *_squareMappedContentsImage;
}

@property (class, copy, nonatomic) NSDate *overrideDate;
@property (class, nonatomic) double overrideDateOffset;

@property (copy, nonatomic) NSString *currentNumberingSystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)makeSecondsHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (id)secondsHandColor;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0 size:(struct CGSize { double x0; double x1; })a1 actions:(id /* block */)a2;
+ (id)makeDotImageWithOuterDiameter:(double)a0 innerDiameter:(double)a1 color:(id)a2 isSeconds:(BOOL)a3 metrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a4;
+ (id)makeSecondsHandLayerWithImageSet:(id)a0;
+ (id)makeImageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (id)effectiveDate;
+ (id)backgroundImageNameWithImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)systemNumberingSystem;
+ (id)iconImageWithImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0 includingMask:(BOOL)a1;
+ (id)imageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (void)configureHandLayer:(id)a0 metrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a1;
+ (id)makeMinutesHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (id)hoursMinutesHandColor;
+ (id)makeHoursHandLayerWithImageSet:(id)a0;
+ (void)_timerFired:(id)a0;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0 size:(struct CGSize { double x0; double x1; })a1 path:(struct CGPath { } *)a2 fillColor:(id)a3 options:(unsigned long long)a4;
+ (id)makeDotLayerWithOuterDiameter:(double)a0 innerDiameter:(double)a1 isSeconds:(BOOL)a2 imageSet:(id)a3;
+ (void)getMetrics:(struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0 forIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
+ (id)makeMinutesHandLayerWithImageSet:(id)a0;
+ (void)_handleTimeChange:(id)a0;
+ (id)fallbackBackgroundImageWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)makeHoursHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (void)precacheDataWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

- (void)getMetrics:(struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
- (void)layoutSubviews;
- (void)localeDidChange:(id)a0;
- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (BOOL)isAnimationAllowed;
- (void)_updateUnanimatedWithComponents:(id)a0;
- (void)_timerFiredWithComponents:(id)a0 flags:(unsigned long long)a1;
- (id)contentsImage;
- (id)squareContentsImage;
- (void)_setAnimating:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setJittering:(BOOL)a0;
- (void)applyMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)prepareForReuse;
- (void)updateAnimatingState;
- (void)updateUnanimated;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;

@end
