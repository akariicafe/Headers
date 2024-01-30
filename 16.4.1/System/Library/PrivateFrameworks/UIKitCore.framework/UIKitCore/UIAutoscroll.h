@class NSTimer, UIView;
@protocol UIAutoscrollContainer;

@interface UIAutoscroll : NSObject {
    id m_target;
    NSTimer *m_timer;
}

@property (weak, nonatomic) id target;
@property (retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) int directions;
@property (nonatomic) double repeatInterval;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL disabled;

- (void)timerFired:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)startAutoscroll:(id)a0 scrollContainer:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 directions:(int)a3 repeatInterval:(double)a4;

@end
