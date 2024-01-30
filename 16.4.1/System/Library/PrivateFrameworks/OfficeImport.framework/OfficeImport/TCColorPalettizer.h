@interface TCColorPalettizer : NSObject {
    struct _tagOctree { struct _tagOctreeNode *x0; unsigned short x1; unsigned short x2; struct _tagRgbQuad *x3; struct _tagLevelItem *x4[9]; } *m_pTree;
    BOOL isDefaultPaletteSize;
}

- (void)dealloc;
- (int)addPixelToOctree:(struct _tagOctree { struct _tagOctreeNode *x0; unsigned short x1; unsigned short x2; struct _tagRgbQuad *x3; struct _tagLevelItem *x4[9]; } *)a0 pixel:(struct _tagRgbQuad { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a1;
- (BOOL)addQuadColor:(struct _tagRgbQuad { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;
- (BOOL)addTSUColor:(id)a0;
- (int)createNodeOctree:(struct _tagOctreeNode **)a0 parent:(struct _tagOctreeNode { struct _tagOctreeNode *x0; struct _tagOctreeNode *x1[8]; unsigned int x2; struct _tagFPRgbTriple { unsigned int x0; unsigned int x1; unsigned int x2; } x3; unsigned short x4; } *)a1;
- (int)createOctree:(struct _tagOctree **)a0 maxPaletteSize:(unsigned short)a1;
- (void)createPalette;
- (int)deleteListOctree:(struct _tagLevelItem { struct _tagLevelItem *x0; struct _tagOctreeNode *x1; } *)a0;
- (int)deleteNodeOctree:(struct _tagOctreeNode { struct _tagOctreeNode *x0; struct _tagOctreeNode *x1[8]; unsigned int x2; struct _tagFPRgbTriple { unsigned int x0; unsigned int x1; unsigned int x2; } x3; unsigned short x4; } *)a0;
- (int)deleteOctree:(struct _tagOctree { struct _tagOctreeNode *x0; unsigned short x1; unsigned short x2; struct _tagRgbQuad *x3; struct _tagLevelItem *x4[9]; } *)a0;
- (id)getPaletteData;
- (id)getPaletteDataRaw;
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode { struct _tagOctreeNode *x0; struct _tagOctreeNode *x1[8]; unsigned int x2; struct _tagFPRgbTriple { unsigned int x0; unsigned int x1; unsigned int x2; } x3; unsigned short x4; } *)a0 paletteEntry:(struct _tagRgbQuad { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a1 index:(unsigned short)a2;
- (id)getPngPaletteData;
- (id)initWitDefaultPaletteSize;
- (id)initWitMaxPaletteSize:(unsigned int)a0;
- (unsigned int)paletteColorCount;
- (int)paletteIndexFromQuadColor:(struct _tagRgbQuad { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;
- (int)paletteIndexFromTSUColor:(id)a0;
- (int)reduceOctree:(struct _tagOctree { struct _tagOctreeNode *x0; unsigned short x1; unsigned short x2; struct _tagRgbQuad *x3; struct _tagLevelItem *x4[9]; } *)a0;
- (int)rgbToIndexOctree:(struct _tagOctree { struct _tagOctreeNode *x0; unsigned short x1; unsigned short x2; struct _tagRgbQuad *x3; struct _tagLevelItem *x4[9]; } *)a0 source:(struct _tagRgbQuad { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a1 destination:(char *)a2;

@end
