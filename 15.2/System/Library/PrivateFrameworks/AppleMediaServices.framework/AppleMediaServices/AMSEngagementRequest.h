@class NSString, NSDictionary, NSURL, ACAccount;

@interface AMSEngagementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *clientData;
@property (retain, nonatomic) NSString *logKey;
@property (nonatomic) BOOL failOnDismiss;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (nonatomic) long long presentationStyle;
@property (retain, nonatomic) NSURL *URL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
