@interface CKVMatchingSpanPriorInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int ordinality;
@property (readonly, nonatomic) float score;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;
- (BOOL)isEqualToMatchingSpanPriorInfo:(id)a0;

@end
