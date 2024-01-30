@class UIImage;

@interface SBHClockHandsImageSet : NSObject {
    struct SBHClockApplicationIconImageMetrics { double secondsHandWidth; double secondsHandLength; double secondsHandleLength; double secondsHandRingDiameter; double secondsHandRingKnockoutDiameter; struct CGSize { double width; double height; } secondsHandBounds; double minutesHandWidth; double minutesHandLength; double minutesHandRingDiameter; double minutesHandRingKnockoutDiameter; struct CGSize { double width; double height; } minutesHandBounds; double shadowRadius; double shadowInset; double hoursHandWidth; double hoursHandLength; struct CGSize { double width; double height; } hoursHandBounds; double separatorWidth; double separatorLength; double separatorExtraLength; double faceRadius; double numberPointSize; double contentsScale; struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo; } _metrics;
}

@property (retain, nonatomic) UIImage *seconds;
@property (retain, nonatomic) UIImage *minutes;
@property (retain, nonatomic) UIImage *hours;
@property (retain, nonatomic) UIImage *hourMinuteDot;
@property (retain, nonatomic) UIImage *secondDot;

- (void)setMetrics:(const in struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
- (void)getMetrics:(out struct SBHClockApplicationIconImageMetrics { double x0; double x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; struct CGSize { double x0; double x1; } x10; double x11; double x12; double x13; double x14; struct CGSize { double x0; double x1; } x15; double x16; double x17; double x18; double x19; double x20; double x21; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x22; } *)a0;
- (void).cxx_destruct;

@end
