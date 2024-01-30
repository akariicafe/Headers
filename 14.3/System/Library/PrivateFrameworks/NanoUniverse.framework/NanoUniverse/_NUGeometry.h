@interface _NUGeometry : NSObject

@property (readonly, nonatomic) struct _NUVertex { } *vertices;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) int vcount;
@property (readonly, nonatomic) int icount;

- (void)dealloc;
- (int)addVertices:(const struct _NUVertex { } *)a0 count:(int)a1;
- (int)addIndices:(const unsigned short *)a0 count:(int)a1 vbase:(int)a2;

@end
