@interface WXParagraphProperties : NSObject

+ (id)wrapCodeEnumMap;
+ (id)dropCapEnumMap;
+ (id)heightRuleEnumMap;
+ (id)horizontalAnchorEnumMap;
+ (id)lineSpacingEnumMap;
+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 to:(id)a1 readBaseStyle:(BOOL)a2 state:(id)a3;
+ (id)strictTabTypeEnumMap;
+ (id)tabLeaderEnumMap;
+ (id)tabTypeEnumMap;
+ (id)verticalAnchorEnumMap;

@end
