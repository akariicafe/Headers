@interface VCPFaceGeometry : NSObject <NSSecureCoding> {
    void *_vertices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithVertices:(const void *)a0 vertexCount:(unsigned long long)a1;

@end
