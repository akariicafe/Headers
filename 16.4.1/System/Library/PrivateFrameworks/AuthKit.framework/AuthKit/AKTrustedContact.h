@class NSUUID, NSString;

@interface AKTrustedContact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *hashedWrappingKeyRKC;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 status:(long long)a1;

@end
