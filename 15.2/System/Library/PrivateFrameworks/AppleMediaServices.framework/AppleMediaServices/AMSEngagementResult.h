@class NSString, NSDictionary;

@interface AMSEngagementResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ams_buyParams;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)_updatedBodyFromValue:(id)a0 request:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)ams_requestActionFromRequest:(id)a0;

@end
