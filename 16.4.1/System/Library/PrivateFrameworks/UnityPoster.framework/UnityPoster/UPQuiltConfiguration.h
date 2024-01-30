@class UIBezierPath, UPSeededRandomizer;

@interface UPQuiltConfiguration : NSObject {
    UPSeededRandomizer *_randomizer;
    UPQuiltConfiguration *_fromInterpolatedConfiguration;
    UPQuiltConfiguration *_toInterpolatedConfiguration;
}

@property (readonly, nonatomic) unsigned long long randomizationSeedValue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeBounds;
@property (readonly, nonatomic) double lineVariance;
@property (retain, nonatomic) UIBezierPath *topQuiltAwakeLockedPath;
@property (retain, nonatomic) UIBezierPath *bottomLeftQuiltAwakeLockedPath;
@property (retain, nonatomic) UIBezierPath *intersectionPieceAwakeLockedPath;
@property (retain, nonatomic) UIBezierPath *bottomRightQuiltAwakeLockedPath;
@property (retain, nonatomic) UIBezierPath *topQuiltAsleepPath;
@property (retain, nonatomic) UIBezierPath *bottomLeftQuiltAsleepPath;
@property (retain, nonatomic) UIBezierPath *topQuiltUnlockedPath;
@property (retain, nonatomic) UIBezierPath *bottomLeftQuiltUnlockedPath;
@property (retain, nonatomic) UIBezierPath *bottomRightQuiltUnlockedPath;
@property (readonly, nonatomic) BOOL isSnapshotConfiguration;

- (void).cxx_destruct;
- (id)initWithRandomizationSeedValue:(unsigned long long)a0 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 lineVariance:(double)a3;

@end
