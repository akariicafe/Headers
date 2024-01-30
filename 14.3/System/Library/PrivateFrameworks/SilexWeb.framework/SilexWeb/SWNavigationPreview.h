@class NSURLRequest, UIViewController;
@protocol SWNavigationHandler;

@interface SWNavigationPreview : NSObject

@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) id<SWNavigationHandler> navigationHandler;
@property (readonly, nonatomic) NSURLRequest *request;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 navigationHandler:(id)a1 URLRequest:(id)a2;

@end
