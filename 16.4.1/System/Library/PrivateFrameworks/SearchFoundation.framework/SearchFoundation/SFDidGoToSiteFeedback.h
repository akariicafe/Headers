@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback

@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;

+ (BOOL)supportsSecureCoding;

- (id)initWithInput:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
