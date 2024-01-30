@interface OAXGeometry : NSObject

+ (id)readCustomGeometryFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 hasImplicitFormulas:(BOOL)a1 drawingState:(id)a2;
+ (void)addFormulasFromFile:(id)a0 toCustomGeometry:(id)a1 formulaNameToIndexMap:(id)a2 drawingState:(id)a3;
+ (int)adjustValueWithGuideXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
+ (id)formulaKeywordEnumMap;
+ (id)formulaTypeEnumMap;
+ (id)pathFillModeEnumMap;
+ (struct OADAdjustCoord { BOOL x0; int x1; })readAdjustCoordFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 name:(const char *)a1 formulaNameToIndexMap:(id)a2;
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toCustomGeometry:(id)a1 adjustValueNameToIndexMap:(id)a2 drawingState:(id)a3;
+ (void)readFormulasFromCustomGeometryXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toCustomGeometry:(id)a1 adjustValueNameToIndexMap:(id)a2 formulaNameToIndexMap:(id)a3 drawingState:(id)a4;
+ (id)readFromParentXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 drawingState:(id)a1;
+ (void)readPathsFromCustomGeometryXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toCustomGeometry:(id)a1 formulaNameToIndexMap:(id)a2 drawingState:(id)a3;
+ (id)readPresetGeometryFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 drawingState:(id)a1;
+ (void)readTextRectFromCustomGeometryXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toCustomGeometry:(id)a1 formulaNameToIndexMap:(id)a2 drawingState:(id)a3;
+ (id)shapeTypeEnumMap;
+ (int)shapeTypeForString:(id)a0;
+ (id)stringForShapeType:(int)a0;
+ (id)stringWritingShapeType:(int)a0;
+ (void)write:(id)a0 to:(id)a1;
+ (void)writePath:(id)a0 coordSpace:(struct CsRect<int> { int x0[4]; })a1 to:(id)a2;
+ (void)writeShapePathPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a0 origin:(struct CsPoint<int> { int x0[2]; })a1 to:(id)a2;

@end
