@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)batchSize;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)processingBlock;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (Class)enumeratedType;

@end
