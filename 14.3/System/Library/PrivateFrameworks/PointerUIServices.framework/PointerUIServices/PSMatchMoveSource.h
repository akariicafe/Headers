@interface PSMatchMoveSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long sourceLayerRenderID;
@property (readonly, nonatomic) unsigned int sourceContextID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceContextID:(unsigned int)a0 sourceLayerRenderID:(unsigned long long)a1;

@end
