@class AXFrontBoardProcessWatcher;

@interface AXCarPlayGlue : NSObject

@property (retain, nonatomic) AXFrontBoardProcessWatcher *watcher;

+ (void)accessibilityInitializeBundle;

- (id)init;
- (void).cxx_destruct;

@end
