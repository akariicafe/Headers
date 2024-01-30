@interface WFDailyRoutineShortcutsManager : NSObject

+ (void)getDailyRoutineShortcutsWithCompletionHandler:(id /* block */)a0;
+ (id /* block */)processActionResponseBlockWithCompletion:(id /* block */)a0;
+ (id)goingToWorkShortcut;
+ (id)headingHomeShortcut;
+ (id)atTheGymShortcut;

@end
