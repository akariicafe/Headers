@class NSTimer;

@interface SBIconListViewAppDragContext : NSObject

@property (retain, nonatomic) NSTimer *pauseTimer;
@property (nonatomic) struct CGPoint { double x; double y; } pausePoint;
@property (nonatomic) BOOL hasPaused;

- (void).cxx_destruct;

@end
