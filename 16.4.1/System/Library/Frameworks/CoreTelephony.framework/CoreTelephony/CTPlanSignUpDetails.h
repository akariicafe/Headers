@class NSString;

@interface CTPlanSignUpDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *signUpUrl;
@property (retain, nonatomic) NSString *signUpUrlType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSignUpUrl:(id)a0 signUpUrlType:(id)a1;

@end
