@interface EBGraphic : NSObject

+ (id)readGraphicWithDictionary:(id)a0 state:(id)a1;
+ (void)readNotesWithDictionary:(id)a0 state:(id)a1;
+ (void)readChart:(id)a0 chartIndex:(short)a1 state:(id)a2;
+ (void)readGraphicsInChart:(id)a0 state:(id)a1;
+ (id)readMainChartWithState:(id)a0;
+ (void)readOle:(id)a0 xlGraphicsInfo:(struct XlGraphicsInfo { void /* function */ **x0; int x1; short x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; struct ChVector<XlGraphicsInfo::XlObjData *> { struct XlObjData **x0; struct XlObjData **x1; struct __compressed_pair<XlGraphicsInfo::XlObjData **, ChAllocator<XlGraphicsInfo::XlObjData *> > { struct XlObjData **x0; } x2; } x7; BOOL x8; int x9; struct XlString *x10; int x11; int x12; int x13; BOOL x14; unsigned short x15; unsigned short x16; unsigned short x17; char *x18; unsigned int x19; unsigned int x20; BOOL x21; unsigned int x22; unsigned int x23; int x24; int x25; BOOL x26; struct XlString *x27; } *)a1 state:(id)a2;
+ (void)readImage:(id)a0 xlGraphicsInfo:(struct XlGraphicsInfo { void /* function */ **x0; int x1; short x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; struct ChVector<XlGraphicsInfo::XlObjData *> { struct XlObjData **x0; struct XlObjData **x1; struct __compressed_pair<XlGraphicsInfo::XlObjData **, ChAllocator<XlGraphicsInfo::XlObjData *> > { struct XlObjData **x0; } x2; } x7; BOOL x8; int x9; struct XlString *x10; int x11; int x12; int x13; BOOL x14; unsigned short x15; unsigned short x16; unsigned short x17; char *x18; unsigned int x19; unsigned int x20; BOOL x21; unsigned int x22; unsigned int x23; int x24; int x25; BOOL x26; struct XlString *x27; } *)a1 state:(id)a2;
+ (int)objectTypeForShape:(id)a0;
+ (void)readGraphicsWithState:(id)a0;

@end
