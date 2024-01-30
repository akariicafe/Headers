@interface PKInkProperties : NSObject

+ (id)functionNames;
+ (unsigned long long)functionTypeForBezierControlPoints:(struct { double x0; double x1; double x2; double x3; })a0;
+ (id)inkPropertyNames;
+ (id)inputNames;
+ (struct { double x0; double x1; double x2; double x3; })controlPointsForFunctionType:(unsigned long long)a0;
+ (struct { double x0; double x1; })rangeForInput:(unsigned long long)a0;
+ (BOOL)bezierControlPoints:(struct { double x0; double x1; double x2; double x3; })a0 isEqual:(struct { double x0; double x1; double x2; double x3; })a1;
+ (struct { double x0; double x1; })rangeForInkProperty:(unsigned long long)a0;
+ (double)defaultValueForInput:(unsigned long long)a0;
+ (id)blendModeNames;
+ (id)inkTypeNames;
+ (id)inputMaskNames;
+ (unsigned long long)functionTypeForName:(id)a0;
+ (id)arrayForBezierControlPoints:(struct { double x0; double x1; double x2; double x3; })a0;

@end
