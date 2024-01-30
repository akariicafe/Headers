@interface WXVmlReadClient : NSObject <OAVReadClient>

+ (void)initialize;
+ (int)vmlSupportLevel;
+ (int)zIndex:(id)a0;
+ (void)copyFromDrawable:(id)a0 toContent:(id)a1;
+ (BOOL)floating:(id)a0;
+ (int)horizontalPosition:(id)a0;
+ (void)readClientDataFromGroup:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toGroup:(id)a1 state:(id)a2;
+ (void)readClientDataFromShape:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toGraphic:(id)a1 state:(id)a2;
+ (void)readFromDrawable:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toContent:(id)a1;
+ (void)readTextWrappingFromParent:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toAnchor:(id)a1;
+ (int)relativeHorizontalPosition:(id)a0;
+ (int)relativeVerticalPosition:(id)a0;
+ (int)verticalPosition:(id)a0;
+ (double)wrapDistanceBottom:(id)a0;
+ (double)wrapDistanceLeft:(id)a0;
+ (double)wrapDistanceRight:(id)a0;
+ (double)wrapDistanceTop:(id)a0;

@end
