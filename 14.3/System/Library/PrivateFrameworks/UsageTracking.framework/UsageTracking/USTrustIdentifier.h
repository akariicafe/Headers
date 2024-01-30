@class NSString;

@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL trusted;

+ (id)identifierWithIdentifier:(id)a0 trusted:(BOOL)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 trusted:(BOOL)a1;
- (void)_USTrustIdentifierCommonInitWithIdentifier:(id)a0 trusted:(BOOL)a1;

@end
