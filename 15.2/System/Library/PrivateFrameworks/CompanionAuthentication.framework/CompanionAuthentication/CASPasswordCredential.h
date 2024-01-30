@class NSString;

@interface CASPasswordCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *password;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
