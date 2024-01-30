@class UIViewController;

@interface SearchUIPeekCommand : SearchUICommand

@property (retain, nonatomic) UIViewController *viewController;

+ (id)urlMatchingScheme:(id)a0 inPunchout:(id)a1;

- (id /* block */)actionProvider;
- (void).cxx_destruct;
- (id)generateViewController;

@end
