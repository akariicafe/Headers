@class NSMutableArray;

@interface LaunchStateController : NSObject {
    NSMutableArray *_actionBlocks;
    BOOL _rootViewIsActive;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)forceMarkUIBecomeActiveForTesting;
- (void)doAfterUIBecomesActive:(id /* block */)a0;
- (void)applicationUIDidBecomeActive;

@end
