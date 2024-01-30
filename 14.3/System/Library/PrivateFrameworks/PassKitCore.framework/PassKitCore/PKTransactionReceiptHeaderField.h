@class NSString;

@interface PKTransactionReceiptHeaderField : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (BOOL)isEqualToTransactionReceiptHeaderField:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
