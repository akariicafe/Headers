@class NSString, NSArray, WFDailyRoutineShortcutSetupTriggerBuilder, WFDailyRoutineShortcutSetupLocation;

@interface WFDailyRoutineShortcutSetupFlow : NSObject

@property (readonly, copy, nonatomic) NSString *routineName;
@property (readonly, copy, nonatomic) NSArray *questions;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupLocation *location;

- (void).cxx_destruct;
- (id)initWithRoutineName:(id)a0 questions:(id)a1 trigger:(id)a2 location:(id)a3;

@end
