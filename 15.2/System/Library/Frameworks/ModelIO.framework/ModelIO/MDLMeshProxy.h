@interface MDLMeshProxy : MDLMesh <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithVertexBuffers:(id)a0 vertexCount:(unsigned long long)a1 descriptor:(id)a2 submeshes:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
