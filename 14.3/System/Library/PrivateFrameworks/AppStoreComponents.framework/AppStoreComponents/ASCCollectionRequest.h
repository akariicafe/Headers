@class NSString;

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, nonatomic) long long limit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithID:(id)a0 kind:(id)a1 context:(id)a2 limit:(long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
