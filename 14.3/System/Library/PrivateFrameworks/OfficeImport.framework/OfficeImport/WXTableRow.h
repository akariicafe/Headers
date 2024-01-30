@interface WXTableRow : NSObject

+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 tableGrid:(struct ChVector<long> { } *)a1 to:(id)a2 state:(id)a3;
+ (void)readCellsFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 tableGrid:(struct ChVector<long> { long long *x0; long long *x1; struct __compressed_pair<long *, ChAllocator<long> > { long long *x0; } x2; } *)a1 to:(id)a2 gridIndex:(long long *)a3 state:(id)a4;

@end
