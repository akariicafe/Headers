@class NSMutableArray;

@interface _PXStoryPacingControllerDecisionHistory : NSObject {
    NSMutableArray *_decisionHistory;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentError;
@property (readonly, nonatomic) long long onBarCount;
@property (readonly, nonatomic) long long decisionCount;
@property (readonly, nonatomic) double onBarPercentage;

- (id)init;
- (void).cxx_destruct;
- (void)resetWithTargetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 reason:(id)a1;
- (void)recordDecision:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x4; long long x5; struct { long long x0; int x1; unsigned int x2; long long x3; } x6; double x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; long long x9; char x10; struct { long long x0; int x1; unsigned int x2; long long x3; } x11; })a0;
- (id)descriptionWithShortStyle:(BOOL)a0;
- (struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x4; long long x5; struct { long long x0; int x1; unsigned int x2; long long x3; } x6; double x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; long long x9; char x10; struct { long long x0; int x1; unsigned int x2; long long x3; } x11; })firstPacingDecisionAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
