@class NSTimer, NSObject;
@protocol TSDAutoscrollDelegate;

@interface TSDAutoscroll : NSObject {
    NSTimer *mTimer;
    double mLastFired;
}

@property (retain, nonatomic) NSObject<TSDAutoscrollDelegate> *target;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) int directions;
@property (nonatomic) double repeatInterval;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL targetIsAutoscrolling;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } lastAutoscrollDelta;

+ (void)startAutoscroll:(id)a0 unscaledPoint:(struct CGPoint { double x0; double x1; })a1;

- (void)timerFired:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void)p_cleanup;
- (BOOL)startAutoscroll:(id)a0 unscaledPoint:(struct CGPoint { double x0; double x1; })a1 directions:(int)a2 repeatInterval:(double)a3;
- (unsigned long long)p_deltaForCount:(unsigned long long)a0;

@end
