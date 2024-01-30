@class NSArray, NSString, EKFrozenReminderStructuredLocation, REMAlarm;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSArray *triggers;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;

+ (Class)meltedClass;
+ (id)semanticIdentifierFromREMAlarm:(id)a0;
+ (id)triggersFromAbsoluteDate:(id)a0 relativeOffset:(double)a1 timeValuesRelevant:(BOOL)a2 structuredLocation:(id)a3 proximity:(long long)a4;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)semanticIdentifierFromDateComponents:(id)a0;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)remObjectID;
- (id)emailAddress;
- (id)urlWrapper;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_timeAlarm;
- (id)UUID;
- (id)calendarOwner;
- (void)setCalendarOwner:(id)a0;
- (id)snoozedAlarmsSet;
- (id)updatedAlarmWithLocation:(id)a0;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)uniqueIdentifier;
- (id)_locationAlarm;
- (id)_setTimeOrLocationAlarm:(id)a0;
- (void)_setTimeAndLocationAlarms:(id)a0;
- (id)modifiedStructuredLocation;
- (id)_remStructuredLocation;
- (id)_effectiveAlarm;
- (id)initWithAlarms:(id)a0 inStore:(id)a1;
- (id)calendarItemOwner;
- (id)originalAlarm;
- (id)acknowledgedDate;
- (void)setEmailAddress:(id)a0;
- (void)setUrlWrapper:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithAlarms:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (void)setType:(long long)a0;
- (BOOL)isDefaultAlarm;
- (id)absoluteDate;
- (double)relativeOffset;
- (long long)proximity;

@end
