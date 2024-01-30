@class NSString;

@interface FCSubmitNewsletterPersonalizationVectorCommand : FCCommand

@property (retain, nonatomic) NSString *personalizationVector;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonalizationVector:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;

@end
