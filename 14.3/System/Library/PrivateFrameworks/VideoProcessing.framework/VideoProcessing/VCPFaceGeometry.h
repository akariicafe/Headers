@interface VCPFaceGeometry : NSObject <NSSecureCoding> {
    void *_vertices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithVertices:(const void *)a0 vertexCount:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
