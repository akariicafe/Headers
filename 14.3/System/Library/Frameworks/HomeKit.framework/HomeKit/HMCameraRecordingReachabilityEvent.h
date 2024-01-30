@class NSUUID, NSDate;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly, copy) NSDate *dateOfOccurrence;

- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 dateOfOccurrence:(id)a1 reachable:(BOOL)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
