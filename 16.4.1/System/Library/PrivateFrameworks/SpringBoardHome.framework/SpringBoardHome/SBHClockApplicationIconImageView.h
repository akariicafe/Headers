@class NSString, UIImage, CALayer, NSDate;

@interface SBHClockApplicationIconImageView : SBLiveIconImageView <SBFDateTimeOverrideObserver> {
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_hourMinuteDot;
    CALayer *_secondDot;
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
+ (id)secondsHandColor;
+ (id)makeDotImageWithOuterDiameter:(double)a0 innerDiameter:(double)a1 color:(id)a2 isSeconds:(BOOL)a3 metrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a4;
+ (id)makeSecondsHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (void)_handleTimeChange:(id)a0;
+ (id)iconImageWithImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0 includingMask:(BOOL)a1;
+ (id)makeMinutesHandLayerWithImageSet:(id)a0;
+ (id)makeHoursHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (id)makeDotLayerWithOuterDiameter:(double)a0 innerDiameter:(double)a1 isSeconds:(BOOL)a2 imageSet:(id)a3;
+ (id)makeHoursHandLayerWithImageSet:(id)a0;
+ (id)effectiveDate;
+ (id)makeSecondsHandLayerWithImageSet:(id)a0;
+ (id)hoursMinutesHandColor;
+ (void)configureHandLayer:(id)a0 metrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a1;
+ (void)_timerFired:(id)a0;
+ (id)backgroundImageNameWithImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)systemNumberingSystem;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0 size:(struct CGSize { double x0; double x1; })a1 actions:(id /* block */)a2;
+ (id)imageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (id)makeMinutesHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0 size:(struct CGSize { double x0; double x1; })a1 path:(struct CGPath { } *)a2 fillColor:(id)a3 options:(unsigned long long)a4;
+ (id)fallbackBackgroundImageWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (id)makeImageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
+ (void)precacheDataWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (void)getMetrics:(struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0 forIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;

- (id)contentsImage;
- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (void)getMetrics:(struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
- (void)updateAnimatingState;
- (void)_setAnimating:(BOOL)a0;
- (void)localeDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUnanimated;
- (void)setPaused:(BOOL)a0;
- (void)_timerFiredWithComponents:(id)a0 flags:(unsigned long long)a1;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (void)applyMetrics:(const struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
- (void)layoutSubviews;
- (id)squareContentsImage;
- (BOOL)isAnimationAllowed;
- (void).cxx_destruct;
- (void)_updateUnanimatedWithComponents:(id)a0;

@end
