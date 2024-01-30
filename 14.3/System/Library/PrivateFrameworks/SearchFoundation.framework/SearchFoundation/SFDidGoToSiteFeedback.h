@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback

@property (copy, nonatomic) NSString *input;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
