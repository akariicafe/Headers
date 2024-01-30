@protocol MTLBuffer;

@interface ARGeometryElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) long long count;
@property (nonatomic) long long bytesPerIndex;
@property (nonatomic) long long primitiveType;
@property (readonly, nonatomic) long long indexCountPerPrimitive;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 count:(long long)a1 bytesPerIndex:(long long)a2 primitiveType:(long long)a3;

@end
