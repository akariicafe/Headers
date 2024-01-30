@class UIViewController;

@interface HUViewControllerDismissalRequest : NSObject

@property (readonly, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL animated;

+ (id)requestWithViewController:(id)a0;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;

@end
