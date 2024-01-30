@interface OABColor : NSObject

+ (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })propertyColor:(int)a0 colorPropertiesManager:(id)a1;
+ (id)readColor:(const struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } *)a0 colorPropertiesManager:(id)a1 state:(id)a2;
+ (int)readColorAdjustmentType:(int)a0;
+ (int)readSystemColorID:(int)a0;
+ (int)writeSystemColorID:(int)a0;

@end
