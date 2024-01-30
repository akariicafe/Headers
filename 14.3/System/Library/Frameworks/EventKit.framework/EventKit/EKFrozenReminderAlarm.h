@class NSArray, NSString, EKFrozenReminderStructuredLocation, REMAlarm;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSArray *triggers;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;

+ (id)uniqueIdentifierForREMObject:(id)a0;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)triggersFromAbsoluteDate:(id)a0 relativeOffset:(double)a1 timeValuesRelevant:(BOOL)a2 structuredLocation:(id)a3 proximity:(long long)a4;
+ (id)semanticIdentifierFromDateComponents:(id)a0;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)a0;
+ (Class)meltedClass;
+ (id)semanticIdentifierFromREMAlarm:(id)a0;

- (long long)proximity;
- (id)updatedAlarmWithLocation:(id)a0;
- (id)_timeAlarm;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)originalAlarm;
- (void).cxx_destruct;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)UUID;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_locationAlarm;
- (id)remObjectID;
- (id)_setTimeOrLocationAlarm:(id)a0;
- (void)_setTimeAndLocationAlarms:(id)a0;
- (id)_remStructuredLocation;
- (id)initWithAlarms:(id)a0 inStore:(id)a1;
- (id)uniqueIdentifier;
- (id)absoluteDate;
- (double)relativeOffset;
- (BOOL)isDefaultAlarm;
- (id)semanticIdentifier;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)modifiedStructuredLocation;
- (id)initWithAlarms:(id)a0 inStore:(id)a1 withChanges:(id)a2;

@end
