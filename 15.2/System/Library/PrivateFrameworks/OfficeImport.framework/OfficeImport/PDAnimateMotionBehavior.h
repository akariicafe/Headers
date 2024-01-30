@class OITSUBezierPath, NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    OITSUBezierPath *mPath;
    BOOL mHasAngle;
    double mAngle;
    NSString *mPointsTypes;
    BOOL mHasOriginType;
    int mOriginType;
    BOOL mHasRotationCenter;
    struct CGPoint { double x; double y; } mRotationCenter;
    BOOL mHasPathEditMode;
    int mPathEditMode;
}

+ (id)bezierPathFromNSString:(id)a0;
+ (id)NSStringForBezierPath:(id)a0;

- (void)setPath:(id)a0;
- (void)setAngle:(double)a0;
- (BOOL)hasAngle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)angle;
- (id)path;
- (unsigned long long)hash;
- (BOOL)hasPath;
- (void)setOriginType:(int)a0;
- (id)pointsTypes;
- (BOOL)hasOriginType;
- (int)originType;
- (BOOL)hasRotationCenter;
- (struct CGPoint { double x0; double x1; })rotationCenter;
- (BOOL)hasPathEditMode;
- (int)pathEditMode;
- (void)setPointsTypes:(id)a0;
- (void)setRotationCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setPathEditMode:(int)a0;

@end
