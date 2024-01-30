@interface STSizeVector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long fixed;
@property (readonly) long long docsAndData;
@property (readonly) long long purgeable;
@property (readonly) long long dynamic;
@property (readonly) long long userTotal;
@property (readonly) BOOL isZero;

+ (id)zero;
+ (id)fixed:(long long)a0;
+ (id)fixed:(long long)a0 docsAndData:(long long)a1 purgeable:(long long)a2;
+ (id)docsAndData:(long long)a0;
+ (id)purgeable:(long long)a0;
+ (id)fixed:(long long)a0 docsAndData:(long long)a1;
+ (id)fixed:(long long)a0 purgeable:(long long)a1;
+ (id)docsAndData:(long long)a0 purgeable:(long long)a1;
+ (id)fixed:(long long)a0 dynamic:(long long)a1 purgeable:(long long)a2;
+ (id)dynamic:(long long)a0 purgeable:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)plus:(id)a0;
- (BOOL)isEqualToSizeVector:(id)a0;
- (id)initWithFixed:(long long)a0 docsAndData:(long long)a1 purgeable:(long long)a2;

@end
