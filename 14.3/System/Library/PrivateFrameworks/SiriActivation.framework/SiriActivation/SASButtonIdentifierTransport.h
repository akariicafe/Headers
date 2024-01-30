@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;

- (BOOL)_identifierMatchesSiriButtonIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)siriButtonIdentifier;
- (id)description;
- (id)initWithSiriButtonIdentifier:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
