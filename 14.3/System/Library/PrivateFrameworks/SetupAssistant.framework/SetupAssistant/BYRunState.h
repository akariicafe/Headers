@interface BYRunState : NSObject

+ (id)sharedRunState;

- (BOOL)hasCompletedInitialRun;

@end
