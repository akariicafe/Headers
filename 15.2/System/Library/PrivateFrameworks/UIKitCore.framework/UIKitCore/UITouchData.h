@class UITouch;

@interface UITouchData : NSObject {
    struct CGPoint { double x; double y; } startTouchDownLocation;
    unsigned long long lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    BOOL touchIsValidTap;
    UITouch *lastTouch;
}

@end
