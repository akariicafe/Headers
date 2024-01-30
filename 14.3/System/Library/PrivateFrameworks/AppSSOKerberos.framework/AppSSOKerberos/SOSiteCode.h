@class NSString, NSDate;

@interface SOSiteCode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) NSString *networkFingerprint;

- (double)age;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSiteCode:(id)a0 forNetworkFingerprint:(id)a1;

@end
