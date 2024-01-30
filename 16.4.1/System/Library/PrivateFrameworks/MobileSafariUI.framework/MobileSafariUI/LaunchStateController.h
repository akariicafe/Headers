@class NSMutableArray;

@interface LaunchStateController : NSObject {
    NSMutableArray *_actionBlocks;
}

@property (readonly, nonatomic) BOOL hasCompletedLaunch;

+ (id)sharedController;

- (void)forceMarkUIBecomeActiveForTesting;
- (void)doAfterUIBecomesActive:(id /* block */)a0;
- (void)applicationUIDidBecomeActive;
- (id)init;
- (void).cxx_destruct;

@end
