@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;

- (id)initWithString:(id)a0;
- (BOOL)_identifierMatchesSiriButtonIdentifier:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)siriButtonIdentifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiriButtonIdentifier:(long long)a0;

@end
