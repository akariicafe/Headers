@interface PKDrawingReplayPoint : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) double delay;

- (struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })pkInputPointWithOffset:(struct CGPoint { double x0; double x1; })a0;

@end
