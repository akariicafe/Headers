@interface OAXScene3D : NSObject

+ (BOOL)isEmpty:(id)a0;
+ (void)writeCamera:(id)a0 to:(id)a1;
+ (id)cameraTypeEnumMap;
+ (id)lightRigDirectionEnumMap;
+ (id)lightRigTypeEnumMap;
+ (id)readBackdropFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 drawingState:(id)a1;
+ (id)readCameraFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 drawingState:(id)a1;
+ (id)readLightRigFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 drawingState:(id)a1;
+ (id)readScene3DFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 packagePart:(id)a1 drawingState:(id)a2;
+ (void)writeBackdrop:(id)a0 to:(id)a1;
+ (void)writeLightRig:(id)a0 to:(id)a1;
+ (void)writeRotation3D:(id)a0 to:(id)a1;
+ (void)writeScene3D:(id)a0 to:(id)a1;

@end
