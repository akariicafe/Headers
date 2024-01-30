@interface EXCell : NSObject

+ (double)dateTimeNumberFromXmlDateString:(id)a0 state:(id)a1;
+ (BOOL)edBoolFromXmlBoolString:(id)a0;
+ (void)edCellFromXmlCellElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 edRowInfo:(struct EDRowInfo **)a1 edRowBlock:(id)a2 edRowBlocks:(id)a3 state:(id)a4;
+ (int)edCellTypeFromXmlCellElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 isDate:(BOOL *)a1 isFmlaStr:(BOOL *)a2 stringIndex:(BOOL *)a3;
+ (int)edErrorFromXmlErrorString:(id)a0;
+ (id)xmlErrorStringValueEnumMap;

@end
