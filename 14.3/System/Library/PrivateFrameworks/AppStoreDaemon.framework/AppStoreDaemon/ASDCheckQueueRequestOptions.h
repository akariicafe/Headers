@interface ASDCheckQueueRequestOptions : ASDRequestOptions

@property (nonatomic) unsigned long long reason;

+ (BOOL)supportsSecureCoding;

- (id)initWithReason:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
