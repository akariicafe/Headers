@class CNPair;

@interface CNEither : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CNPair *pair;
@property (readonly, nonatomic) BOOL isLeft;
@property (readonly, nonatomic) BOOL isRight;
@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

+ (id)eitherWithLeft:(id)a0 right:(id)a1;
+ (id)eitherWithRight:(id)a0;
+ (id)eitherWithLeft:(id)a0;
+ (id)eitherWithBool:(BOOL)a0 error:(id)a1;
+ (id)eitherWithBlock:(id /* block */)a0;
+ (id)firstLeftInLazyChain:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithLeft:(id)a0 right:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
