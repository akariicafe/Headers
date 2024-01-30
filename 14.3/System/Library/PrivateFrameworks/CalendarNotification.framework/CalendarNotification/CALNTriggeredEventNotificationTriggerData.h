@class NSString, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationTriggerData : NSObject

@property (readonly, nonatomic) unsigned long long trigger;
@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (readonly, nonatomic) EKTravelEngineHypothesis *hypothesis;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTrigger:(unsigned long long)a0 alarmID:(id)a1 isOffsetFromTravelTimeStart:(BOOL)a2 hypothesis:(id)a3;

@end
