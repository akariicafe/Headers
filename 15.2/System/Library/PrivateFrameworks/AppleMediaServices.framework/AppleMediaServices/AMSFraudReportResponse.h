@class NSString;

@interface AMSFraudReportResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *nameSpace;
@property (nonatomic) long long reportedScore;
@property (nonatomic) long long newScore;
@property (retain, nonatomic) NSString *c;
@property (retain, nonatomic) NSString *s;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithURLResult:(id)a0;

@end
