@class NSString;

@interface ASCredentialServiceIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
