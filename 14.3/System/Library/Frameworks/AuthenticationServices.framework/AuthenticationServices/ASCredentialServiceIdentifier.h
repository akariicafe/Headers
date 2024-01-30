@class NSString;

@interface ASCredentialServiceIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
