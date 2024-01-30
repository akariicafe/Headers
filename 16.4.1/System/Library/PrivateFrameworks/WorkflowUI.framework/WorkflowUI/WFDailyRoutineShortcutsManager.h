@interface WFDailyRoutineShortcutsManager : NSObject

+ (id)atTheGymShortcut;
+ (void)getDailyRoutineShortcutsWithCompletionHandler:(id /* block */)a0;
+ (id)goingToWorkShortcut;
+ (id)headingHomeShortcut;
+ (id /* block */)processActionResponseBlockWithCompletion:(id /* block */)a0;

@end
