@class SearchUIActionProvider, UIViewController;

@interface SearchUIPeekCommand : SearchUICommand

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) SearchUIActionProvider *actions;

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)urlMatchingScheme:(id)a0 inPunchout:(id)a1;

- (id /* block */)actionProvider;
- (void).cxx_destruct;
- (id)generateViewController;

@end
