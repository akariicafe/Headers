@class NSString, UIStatusBar;

@interface SBStatusBarContainer : NSObject

@property (weak, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) NSString *reason;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
