@class NSString;

@interface CTPlanSignUpDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *signUpUrl;
@property (retain, nonatomic) NSString *signUpUrlType;

- (id)initWithSignUpUrl:(id)a0 signUpUrlType:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
