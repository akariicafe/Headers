@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {
    NSString *_name;
    int _transition;
    id /* block */ _completion;
    double _curlUpRevealedHeight;
    UIViewController *_viewController;
}

- (id)initWithViewController:(id)a0 name:(id)a1 transition:(int)a2;
- (void).cxx_destruct;

@end
