@interface RTWorkoutDistanceEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithBatchSize:(unsigned long long)a0 ascending:(BOOL)a1;

@end
