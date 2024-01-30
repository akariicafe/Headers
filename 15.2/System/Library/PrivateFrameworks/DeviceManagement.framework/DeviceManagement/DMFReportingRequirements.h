@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reachableHostName;
@property (nonatomic) double updateCoalescenceInterval;
@property (nonatomic) BOOL requireActiveConnection;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
