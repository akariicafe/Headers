@class NSString;

@interface NFVASPassConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long vasMode;
@property (readonly, copy, nonatomic) NSString *passIdentifier;

+ (id)passConfigWithMode:(long long)a0 passIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
