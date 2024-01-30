@class NSString;

@interface SFDidGoToSearchFeedback : SFFeedback

@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long endpoint;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInput:(id)a0 endpoint:(unsigned long long)a1;

@end
