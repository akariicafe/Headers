@interface KVPriorInfo : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _ordinality;
    float _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (float)score;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned int)ordinality;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;
- (BOOL)isEqualToPriorInfo:(id)a0;

@end
