@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *scope;

- (BOOL)hasGlobalScope;
- (id)initWithKeyName:(id)a0 scope:(id)a1;
- (BOOL)hasSameNameAsKey:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)scopedTo:(id)a0;
- (id)deletingPrefixingScope:(id)a0;

@end
