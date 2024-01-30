@class NSString, NSArray;

@interface FCNewsletterSubscribeCommand : FCCommand

@property (copy, nonatomic) NSString *newsletter;
@property (copy, nonatomic) NSArray *includeArray;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNewsletter:(id)a0 includeArray:(id)a1;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
