@interface PXGTextureManagerPreheatingStrategy : NSObject {
    long long _previousRegime;
}

@property (nonatomic) double stoppedOffset;
@property (nonatomic) double slowOffset;
@property (nonatomic) double mediumOffset;
@property (nonatomic) double fastOffset;
@property (readonly, nonatomic) double maxPreheatingDistance;

+ (id)defaultPreheatingStrategy;
+ (id)lowMemoryPreheatingStrategy;
+ (id)noPreheatingStrategy;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preheatingRectForLayout:(id)a0 interactionState:(struct { long long x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; })a1;

@end
