@class NSString;

@interface AMSFraudScore : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *score;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScore:(id)a0 action:(unsigned long long)a1;

@end
