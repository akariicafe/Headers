@class NSNumber;

@interface WiFiAwareDataSessionIssueReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *rtpSequenceNumber;
@property (copy, nonatomic) NSNumber *rtpStartTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)rtpSequenceNumberEquals:(id)a0;
- (BOOL)rtpStartTimeEquals:(id)a0;

@end
