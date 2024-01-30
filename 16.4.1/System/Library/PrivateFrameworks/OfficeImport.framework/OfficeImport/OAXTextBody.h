@interface OAXTextBody : NSObject

+ (unsigned char)readAnchorType:(id)a0;
+ (unsigned char)readFlowType:(id)a0;
+ (void)readFlowType:(id)a0 textBodyProperties:(id)a1;
+ (unsigned char)readHorizontalOverflowType:(id)a0;
+ (void)readHorizontalOverflowType:(id)a0 textBodyProperties:(id)a1;
+ (void)readTextBodyFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 textBody:(id)a1 drawingState:(id)a2;
+ (void)readTextBodyProperties:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 textBodyProperties:(id)a1 drawingState:(id)a2;
+ (void)readVerticalOverflowType:(id)a0 textBodyProperties:(id)a1;
+ (void)readWrapType:(id)a0 textBodyProperties:(id)a1;
+ (id)stringWithTextAnchorType:(unsigned char)a0;
+ (id)stringWithTextBodyFlowType:(unsigned char)a0;
+ (id)stringWithTextBodyHorizontalOverflowType:(unsigned char)a0;
+ (id)stringWithTextBodyVerticalOverflowType:(unsigned char)a0;
+ (id)stringWithTextBodyWrapType:(unsigned char)a0;
+ (void)writeTextBodyAutoFit:(id)a0 to:(id)a1;

@end
