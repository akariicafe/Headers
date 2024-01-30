@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;

- (long long)siriButtonIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_identifierMatchesSiriButtonIdentifier:(long long)a0;
- (id)initWithSiriButtonIdentifier:(long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
