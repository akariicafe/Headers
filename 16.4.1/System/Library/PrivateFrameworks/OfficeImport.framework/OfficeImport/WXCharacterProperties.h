@class TCEnumerationMap;

@interface WXCharacterProperties : NSObject

@property (class, readonly) TCEnumerationMap *underlineEnumMap;
@property (class, readonly) TCEnumerationMap *highlightEnumMap;
@property (class, readonly) TCEnumerationMap *ligaturesEnumMap;
@property (class, readonly) TCEnumerationMap *verticalAlignEnumMap;
@property (class, readonly) TCEnumerationMap *emphasisMarkEnumMap;
@property (class, readonly) TCEnumerationMap *twoLineBracketsEnumMap;
@property (class, readonly) TCEnumerationMap *fontHintEnumMap;

+ (BOOL)isBooleanCharacterPropertyTrue:(int)a0;
+ (void)applyDeletionInsertionProperties:(id)a0 state:(id)a1;
+ (BOOL)readBooleanCharacterMultipleProperty:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 propertyName:(const char *)a1 attributeName:(const char *)a2 outValue:(int *)a3 state:(id)a4;
+ (BOOL)readBooleanCharacterProperty:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 propertyName:(const char *)a1 attributeName:(const char *)a2 outValue:(int *)a3 state:(id)a4;
+ (id)readFillColor:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 forTarget:(id)a1 state:(id)a2;
+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 to:(id)a1 state:(id)a2;
+ (void)readReflection:(id)a0 fromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 state:(id)a2;
+ (void)readShadowForTarget:(id)a0 fromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 state:(id)a2;

@end
