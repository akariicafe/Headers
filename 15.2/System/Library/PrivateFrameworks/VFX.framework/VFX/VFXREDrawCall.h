@interface VFXREDrawCall : NSObject {
    void /* unknown type, empty encoding */ drawCall;
    void /* unknown type, empty encoding */ material;
    void /* unknown type, empty encoding */ aabb;
    void /* unknown type, empty encoding */ reProvidedBuffers;
    void /* unknown type, empty encoding */ reProvidedTextures;
}

- (long long)instanceCount;
- (unsigned char)indexType;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)primitiveType;
- (long long)vertexCount;
- (long long)indexCount;
- (id)indexBuffer;
- (unsigned long long)winding;
- (long long)indexBufferOffset;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (long long)indexBufferSize;
- (unsigned long long)materialIdentifier;
- (void)enumerateBuffers:(id /* block */)a0;
- (void)enumerateTextures:(id /* block */)a0;
- (BOOL)hasLightingEnabled;
- (void)withDefaultLightConstantBuffer:(void *)a0 :(id /* block */)a1;
- (id)meshIdentifier;
- (void)withDefaultIBLConstantBuffer:(void *)a0 :(id /* block */)a1;

@end
