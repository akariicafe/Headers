@class NSString;

@interface AMSEngagementDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL allowsResponse;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
