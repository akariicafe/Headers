@class NSTimer;
@protocol CKInvisibleInkEffectCoverageTrackerDelegate;

@interface CKInvisibleInkEffectCoverageTracker : NSObject {
    double *_expiryTimes;
    unsigned long long _width;
    unsigned long long _height;
    double _cellWidth;
    double _cellHeight;
    NSTimer *_recoverTimer;
}

@property (nonatomic, getter=isUncovered) BOOL uncovered;
@property (weak, nonatomic) id<CKInvisibleInkEffectCoverageTrackerDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double touchLifetime;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)_checkForCover:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 touchLifetime:(double)a1;
- (void)recordTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
