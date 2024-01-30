@class NSNumber, CUIKDefaultAlarmPreferences, PSSpecifier;

@interface CSDefaultAlarmsController : PSListController {
    NSNumber *_defaultAllDayAlarmOffset;
    NSNumber *_defaultTimedAlarmOffset;
    PSSpecifier *_timeToLeaveGroupSpecifier;
    PSSpecifier *_timeToLeaveAlertsSpecifier;
    unsigned long long currentTTLStatus;
}

@property (readonly, nonatomic) CUIKDefaultAlarmPreferences *defaultAlarmPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)locationAuthorizationChanged:(id)a0;
- (void)setDefaultAlarmOffset:(id)a0 specifier:(id)a1;
- (id)defaultAlarmOffsetForSpecifier:(id)a0;
- (id)_alarmValuesForAllDay:(BOOL)a0;
- (id)_alarmTitlesForAllDay:(BOOL)a0 shortened:(BOOL)a1;
- (void)_setEnableTravelAdvisoriesForAutomaticBehavior:(id)a0 specifier:(id)a1;
- (id)_enableTravelAdvisoriesForAutomaticBehavior:(id)a0;
- (void)configureTTL;
- (BOOL)ttlAlertsEffectivelyDisabledDueToLocationAuthorization;

@end
