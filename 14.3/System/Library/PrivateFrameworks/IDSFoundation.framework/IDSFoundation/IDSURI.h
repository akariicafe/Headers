@class NSString;

@interface IDSURI : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *prefixedURI;
@property (readonly, nonatomic) NSString *unprefixedURI;

+ (id)URIWithPrefixedURI:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUnprefixedURI:(id)a0;
- (id)initWithPrefixedURI:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToURI:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
