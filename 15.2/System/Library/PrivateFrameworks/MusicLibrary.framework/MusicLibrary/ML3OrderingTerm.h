@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) NSString *collation;

+ (id)orderingTermWithProperty:(id)a0;
+ (id)orderingTermWithProperty:(id)a0 direction:(int)a1;
+ (id)reversedTerms:(id)a0;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)initWithProperty:(id)a0 direction:(int)a1 collation:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProperty:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProperty:(id)a0 direction:(int)a1;
- (unsigned long long)hash;

@end
