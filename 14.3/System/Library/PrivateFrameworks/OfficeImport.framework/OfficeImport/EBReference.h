@interface EBReference : NSObject

+ (id)edReferenceFromXlRef:(const struct XlRef { unsigned short x0; unsigned short x1; short x2; short x3; BOOL x4; } *)a0;
+ (struct XlRef { unsigned short x0; unsigned short x1; short x2; short x3; BOOL x4; } *)xlRefFromEDReference:(id)a0;

@end
