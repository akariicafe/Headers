@interface SBFScheduler : NSObject

+ (id)immediateScheduler;
+ (id)mainScheduler;
+ (id)globalAsyncScheduler;

@end
