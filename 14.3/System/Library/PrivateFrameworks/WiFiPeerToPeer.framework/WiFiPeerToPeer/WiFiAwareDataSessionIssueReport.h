@class NSNumber;

@interface WiFiAwareDataSessionIssueReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *rtpSequenceNumber;
@property (copy, nonatomic) NSNumber *rtpStartTime;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)rtpSequenceNumberEquals:(id)a0;
- (BOOL)rtpStartTimeEquals:(id)a0;

@end
