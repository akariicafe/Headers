@class NSString;

@interface SiriSpotlightContext : SiriContext

@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic) long long source;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
