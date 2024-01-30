@interface BLSBacklightChangeSourceEventSuppressionMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long reason;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned long long)a0 reason:(unsigned long long)a1;

@end
