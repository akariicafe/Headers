@interface CHXFont : NSObject

+ (id)defaultEdRunCollectionForTitle:(id)a0 titleElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 state:(id)a2;
+ (id)defaultEdRunCollectionWithState:(id)a0;
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)edFontWithFullOadCharacterProperties:(id)a0 state:(id)a1;
+ (id)edFontWithOadCharacterProperties:(id)a0 state:(id)a1;
+ (id)edFontWithOadTextBody:(id)a0 state:(id)a1;
+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (void)mapFontProperties:(id)a0 to:(id)a1;
+ (void)mapFontProperties:(id)a0 toTextProps:(id)a1 withEffects:(id)a2;
+ (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;

@end
