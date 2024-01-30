@class NSString, NSArray, NSURL, ENRegion;

@interface ENTextMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *embeddedURLs;
@property (copy, nonatomic) NSURL *ensTestVerificationURL;
@property (copy, nonatomic) NSString *testVerificationCode;
@property (copy, nonatomic) ENRegion *testVerificationRegion;
@property (readonly, copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSString *verificationString;

+ (id)textMessageWithMessage:(id)a0 embeddedURLs:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(id)a0 embeddedURLs:(id)a1;

@end
