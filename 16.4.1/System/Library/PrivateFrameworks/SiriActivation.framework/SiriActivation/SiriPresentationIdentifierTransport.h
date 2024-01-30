@class NSNumber;

@interface SiriPresentationIdentifierTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)siriPresentationIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiriPresentationIdentifier:(long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
