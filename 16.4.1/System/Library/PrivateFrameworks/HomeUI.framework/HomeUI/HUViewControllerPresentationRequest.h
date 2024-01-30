@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject

@property (readonly, nonatomic) UIViewController *viewController;
@property (nonatomic) unsigned long long preferredPresentationType;
@property (nonatomic) BOOL animated;

+ (id)requestWithViewController:(id)a0;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)asGeneric;

@end
