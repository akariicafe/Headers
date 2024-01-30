@interface MTIntentAlarmResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithAlarmToConfirm:(id)a0;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)a0;
+ (id)successWithResolvedAlarm:(id)a0;

@end
