@class NSString, EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, nonatomic) BOOL hasDisplayedLeaveByMessage;
@property (readonly, nonatomic) BOOL hasDisplayedLeaveNowMessage;
@property (readonly, nonatomic) BOOL hasDisplayedRunningLateMessage;
@property (readonly, copy, nonatomic) NSDate *lastTimeNotificationAdded;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAlarmID:(id)a0 isOffsetFromTravelTimeStart:(BOOL)a1 lastFireTimeOfAlertOffsetFromTravelTime:(id)a2 hypothesis:(id)a3 hasDisplayedLeaveByMessage:(BOOL)a4 hasDisplayedLeaveNowMessage:(BOOL)a5 hasDisplayedRunningLateMessage:(BOOL)a6 lastTimeNotificationAdded:(id)a7;
- (BOOL)isEqualToNotificationData:(id)a0;

@end
