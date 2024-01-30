@interface SBFScheduler : NSObject

+ (id)mainScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end
