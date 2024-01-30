@class TSCH3DChartBarElementProperties;

@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCHUnretainedParent, TSCH3DBarChartAppearance> {
    TSCH3DChartBarElementProperties *mProperties;
}

+ (int)shapeType;
+ (struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; })defaultDetails;

- (id)initWithProperties:(id)a0;
- (BOOL)isCircular;
- (void)dealloc;
- (void)clearParent;
- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (float)maxValueForSeries:(long long)a0;
- (float)signedValueForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;

@end
