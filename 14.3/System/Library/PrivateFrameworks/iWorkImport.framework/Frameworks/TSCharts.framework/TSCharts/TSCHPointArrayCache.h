@class NSIndexSet, NSData, TSCHChartSeries;

@interface TSCHPointArrayCache : NSObject {
    TSCHChartSeries *mSeries;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mAreaFrame;
    NSIndexSet *mGroupIndexSet;
    BOOL mCull;
    NSData *mData;
}

+ (void)clearCache;
+ (id)p_getCacheCreate:(BOOL)a0;
+ (struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)cachedPointsForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cullBadPoints:(BOOL)a3 outCount:(unsigned long long *)a4;
+ (void)setCachedPointsForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cullBadPoints:(BOOL)a3 points:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a4 count:(unsigned long long)a5;

- (void).cxx_destruct;
- (BOOL)matchesSeries:(id)a0 areaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cull:(BOOL)a3;

@end
