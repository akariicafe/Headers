@class UINavigationItem, UINavigationBar, UIBarButtonItem;

@interface _UIAccessibilityNavigationViewInfo : NSObject

@property (weak, nonatomic) UINavigationItem *navigationItem;
@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (weak, nonatomic) UINavigationBar *navigationBar;
@property (nonatomic) BOOL isCancelItem;
@property (nonatomic) BOOL isRightItem;

- (void).cxx_destruct;

@end
