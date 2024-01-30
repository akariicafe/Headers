@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)batchSize;
- (id /* block */)processingBlock;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
