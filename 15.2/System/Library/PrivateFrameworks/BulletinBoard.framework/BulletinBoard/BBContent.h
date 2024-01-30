@class NSString;

@interface BBContent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *message;

+ (id)contentWithTitle:(id)a0 subtitle:(id)a1 message:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToContent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
