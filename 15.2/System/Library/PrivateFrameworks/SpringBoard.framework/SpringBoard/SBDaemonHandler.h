@interface SBDaemonHandler : NSObject

+ (void)initialize;
+ (id)stateDescription;
+ (void)noteDaemonCanceled:(id)a0;
+ (void)removeRequestForKey:(id)a0 forDaemonPid:(int)a1;
+ (BOOL)addRequest:(id)a0 forKey:(id)a1 forDaemonPid:(int)a2;

@end
