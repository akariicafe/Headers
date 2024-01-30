@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer {
    TSCH3DTextureAtlas *mAtlas;
    TSUNoCopyDictionary *mExternalAttributeVariables;
}

- (id)init;
- (void)dealloc;
- (void)flushCache;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (void)beginResources:(id)a0 samples:(float)a1;
- (void)submitResourcesWithProcessor:(id)a0;
- (void)renderWithMeshRenderLabelInfo:(id)a0;
- (id)p_resourceAtIndex:(unsigned long long)a0 childIndex:(unsigned long long)a1 dimension:(unsigned long long)a2 createIfAbsent:(BOOL)a3;
- (unsigned long long)p_indexForExternalAttribute:(id)a0;
- (unsigned long long)p_resourceCount;
- (id)p_vertexResourceAtIndex:(unsigned long long)a0 createIfAbsent:(BOOL)a1;
- (id)p_texcoordResourceAtIndex:(unsigned long long)a0 createIfAbsent:(BOOL)a1;
- (void)p_submitExternalAttributesForIndex:(unsigned long long)a0 processor:(id)a1;
- (id)p_resourceForExternalLabelAttribute:(id)a0 index:(unsigned long long)a1 createIfAbsent:(BOOL)a2;

@end
