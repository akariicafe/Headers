@interface EXAlignmentInfo : NSObject

+ (id)edAlignmentInfoFromVmlAlignmentInfoElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)edAlignmentInfoFromXmlAlignmentInfoElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (int)edHorizontalAlignFromHorizontalAlignString:(id)a0;
+ (int)edVerticalAlignFromVerticalAlignString:(id)a0;
+ (id)horizontalAlignmentEnumMap;
+ (id)verticalAlignmentEnumMap;

@end
