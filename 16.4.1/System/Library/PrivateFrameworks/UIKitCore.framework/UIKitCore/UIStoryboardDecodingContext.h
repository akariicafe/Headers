@class UIViewController, UIClassSwapper, UIStoryboardSegueTemplate;

@interface UIStoryboardDecodingContext : NSObject

@property (retain, nonatomic) UIClassSwapper *classSwapperTemplate;
@property (retain, nonatomic) UIStoryboardSegueTemplate *sourceSegueTemplate;
@property (retain, nonatomic) UIViewController *parentViewController;
@property (nonatomic) long long childViewControllerIndex;
@property (retain, nonatomic) id sender;
@property (copy, nonatomic) id /* block */ creator;

- (void).cxx_destruct;

@end
