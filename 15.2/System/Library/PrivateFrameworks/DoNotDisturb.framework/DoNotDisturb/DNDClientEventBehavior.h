@class NSString, NSUUID, DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *redactedDescription;
@property (readonly, nonatomic) unsigned long long resolutionReason;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly, copy, nonatomic) DNDClientEventDetails *eventDetails;
@property (readonly, nonatomic) unsigned long long interruptionSuppression;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_descriptionForRedacted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventDetails:(id)a0 interruptionSuppression:(unsigned long long)a1 resolutionReason:(unsigned long long)a2 activeModeUUID:(id)a3;
- (unsigned long long)hash;

@end
