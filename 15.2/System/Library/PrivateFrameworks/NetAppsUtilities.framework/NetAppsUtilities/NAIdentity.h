@class NSArray;

@interface NAIdentity : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *characteristics;

+ (id)na_identity;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isObject:(id)a0 equalToObject:(id)a1;
- (unsigned long long)hashOfObject:(id)a0;
- (id)initWithCharacteristics:(id)a0;

@end
