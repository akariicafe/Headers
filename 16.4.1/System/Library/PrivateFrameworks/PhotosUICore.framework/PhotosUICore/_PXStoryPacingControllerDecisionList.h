@class NSString;

@interface _PXStoryPacingControllerDecisionList : NSObject {
    long long _capacity;
}

@property (readonly, nonatomic) struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x4; long long x5; struct { long long x0; int x1; unsigned int x2; long long x3; } x6; double x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; long long x9; char x10; struct { long long x0; int x1; unsigned int x2; long long x3; } x11; } *decisions;
@property (readonly, nonatomic) long long decisionsCount;
@property (readonly, nonatomic) NSString *resetReason;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetRemainingDuration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)appendDecision:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x4; long long x5; struct { long long x0; int x1; unsigned int x2; long long x3; } x6; double x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; long long x9; char x10; struct { long long x0; int x1; unsigned int x2; long long x3; } x11; })a0;
- (void)enumerateDecisionsWithBlock:(id /* block */)a0;
- (id)initWithResetReason:(id)a0 targetRemainingDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
