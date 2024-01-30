@interface REMeshLevelOfDetailDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int meshPartEndIndex;
@property (readonly, nonatomic) float minScreenArea;
@property (readonly, nonatomic) float maxViewDepth;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLodLevelInfo:(const struct MeshLodLevelInfo { float x0; float x1; unsigned int x2; } *)a0;
- (id)initWithMeshPartEndIndex:(unsigned int)a0 minScreenArea:(float)a1 maxViewDepth:(float)a2;
- (struct MeshLodLevelInfo { float x0; float x1; unsigned int x2; })lodLevelInfo;
- (BOOL)validateWithPartCount:(unsigned long long)a0 error:(id *)a1;

@end
