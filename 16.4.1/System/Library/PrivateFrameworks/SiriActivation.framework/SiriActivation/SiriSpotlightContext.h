@class NSString;

@interface SiriSpotlightContext : SiriContext

@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic) long long source;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
