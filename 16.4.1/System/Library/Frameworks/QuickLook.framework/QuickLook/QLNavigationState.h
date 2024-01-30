@class UINavigationController;

@interface QLNavigationState : NSObject

@property BOOL navigationBarHidden;
@property BOOL toolBarHidden;
@property BOOL translucentNavigationBar;
@property BOOL translucentToolbar;
@property (weak) UINavigationController *navigationController;

- (void).cxx_destruct;

@end
