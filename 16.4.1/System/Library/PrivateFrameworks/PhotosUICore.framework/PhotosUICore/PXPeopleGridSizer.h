@interface PXPeopleGridSizer : NSObject

+ (id)_gridCColumnInterpolator;
+ (id)_gridCGutterInterpolator;
+ (id)_gridCMarginInterpolator;
+ (struct CGSize { double x0; double x1; })cellSizeForGridClass:(long long)a0 width:(double)a1;
+ (double)marginForGridClass:(long long)a0 width:(double)a1;
+ (unsigned long long)numberOfColumnsForGridClass:(long long)a0 width:(double)a1;

@end
