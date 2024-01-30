@interface VFXREDrawCall : NSObject {
    void /* unknown type, empty encoding */ drawCall;
    void /* unknown type, empty encoding */ material;
    void /* unknown type, empty encoding */ aabb;
}

- (long long)instanceCount;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)primitiveType;
- (long long)vertexCount;
- (unsigned long long)materialIdentifier;
- (void)enumerateBuffers:(id /* block */)a0;
- (void)enumerateTextures:(id /* block */)a0;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (void /* unknown type, empty encoding */)boundingBoxMax;

@end
