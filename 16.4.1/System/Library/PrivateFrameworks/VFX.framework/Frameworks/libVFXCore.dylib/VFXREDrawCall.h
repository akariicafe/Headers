@class NSString;

@interface VFXREDrawCall : NSObject {
    void /* unknown type, empty encoding */ drawCall;
    void /* unknown type, empty encoding */ aabb;
    void /* unknown type, empty encoding */ _isDepthOnly;
    void /* unknown type, empty encoding */ reProvidedBuffers;
    void /* unknown type, empty encoding */ reProvidedTextures;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ renderPassName;
}

@property (nonatomic, readonly) id /* block */ customHandler;
@property (nonatomic, readonly) BOOL hasCustomHandler;
@property (nonatomic, copy) NSString *renderPassName;
@property (nonatomic, readonly) BOOL isDepthOnly;

- (long long)instanceCount;
- (unsigned char)indexType;
- (long long)vertexCount;
- (id)init;
- (void).cxx_destruct;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (long long)indexCount;
- (unsigned long long)primitiveType;
- (long long)indexBufferSize;
- (unsigned long long)winding;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (void)enumerateBuffers:(id /* block */)a0;
- (void)enumerateTextures:(id /* block */)a0;
- (BOOL)hasLightingEnabled;
- (unsigned long long)materialIdentifier;
- (id)meshIdentifier;
- (void)withDefaultIBLConstantBuffer:(void *)a0 :(id /* block */)a1;
- (void)withDefaultLightConstantBuffer:(void *)a0 :(id /* block */)a1;

@end
