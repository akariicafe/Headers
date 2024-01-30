@protocol STDowntimeOverrideModifier;

@interface STDowntimeOverrideUpdater : NSObject

@property (readonly) id<STDowntimeOverrideModifier> downtimeOverrideModifier;

+ (BOOL)updateActiveOverrideOnBlueprintNow:(id)a0 usingModifier:(id)a1 error:(id *)a2;
+ (BOOL)updateActiveOverrideUsingModifier:(id)a0 byRecomputingFromSchedule:(id)a1 atDate:(id)a2 inCalendar:(id)a3 error:(id *)a4;

- (void).cxx_destruct;

@end
