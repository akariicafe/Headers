@interface SBFScheduler : NSObject

+ (id)immediateScheduler;
+ (id)globalAsyncScheduler;
+ (id)mainScheduler;

@end
