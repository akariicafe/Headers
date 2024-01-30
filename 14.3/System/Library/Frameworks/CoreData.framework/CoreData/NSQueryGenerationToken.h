@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSQueryGenerationToken *currentQueryGenerationToken;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)unpinnedQueryGenerationToken;
+ (id)nostoresQueryGenerationToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)_isEnabled;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
