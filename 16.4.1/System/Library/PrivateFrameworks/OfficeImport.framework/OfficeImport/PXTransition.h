@class TCEnumerationMap;

@interface PXTransition : NSObject

@property (class, readonly) TCEnumerationMap *transitionNodeMap;
@property (class, readonly) TCEnumerationMap *directionAttributeMap;
@property (class, readonly) TCEnumerationMap *reverseDirectionAttributeMap;

+ (BOOL)isPowerPoint2013TransitionType:(int)a0;
+ (BOOL)isPowerPoint2010TransitionType:(int)a0;
+ (BOOL)mapDirection:(id)a0 outDir:(int *)a1;
+ (int)readDirection:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 defaultValue:(int)a1;
+ (int)readInOut:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 defaultValue:(int)a1;
+ (int)readOrientation:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 attribute:(const char *)a1 defaultValue:(int)a2;
+ (int)readReverseDirection:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 defaultValue:(int)a1;
+ (void)readTransitionFromNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 tgtTransition:(id)a1 drawingState:(id)a2;
+ (void)writeDirection:(int)a0 file:(id)a1;
+ (void)writeInOut:(int)a0 file:(id)a1;
+ (void)writeOrientation:(int)a0 withAttributeName:(id)a1 file:(id)a2;
+ (void)writeReverseDirection:(int)a0 file:(id)a1;
+ (void)writeReverseInOut:(int)a0 file:(id)a1;
+ (void)writeReverseOrientation:(int)a0 withAttributeName:(id)a1 file:(id)a2;
+ (void)writeTransitionAttributes:(id)a0 attributePrefix:(id)a1 file:(id)a2;
+ (void)writeTransitionFromSlideBase:(id)a0 file:(id)a1 state:(id)a2;
+ (void)writeTransitionOptions:(id)a0 transitionType:(int)a1 file:(id)a2;

@end
