@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer {
    TSCH3DTextureAtlas *_atlas;
    TSUNoCopyDictionary *_externalAttributeVariables;
}

- (void)flushCache;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)p_resourceCount;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (void)beginResources:(id)a0 samples:(float)a1;
- (unsigned long long)p_indexForExternalAttribute:(id)a0;
- (id)p_resourceAtIndex:(unsigned long long)a0 childIndex:(unsigned long long)a1 dimension:(unsigned long long)a2 createIfAbsent:(BOOL)a3;
- (id)p_resourceForExternalLabelAttribute:(id)a0 index:(unsigned long long)a1 createIfAbsent:(BOOL)a2;
- (void)p_submitExternalAttributesForIndex:(unsigned long long)a0 processor:(id)a1;
- (id)p_texcoordResourceAtIndex:(unsigned long long)a0 createIfAbsent:(BOOL)a1;
- (id)p_vertexResourceAtIndex:(unsigned long long)a0 createIfAbsent:(BOOL)a1;
- (void)renderWithMeshRenderLabelInfo:(id)a0;
- (void)submitResourcesWithProcessor:(id)a0;

@end
