@class SKUIItem, NSString, NSURL, UIViewController;

@interface SKUIProductPageAction : NSObject {
    NSString *_urlTitle;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) SKUIItem *item;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) id /* block */ viewControllerBlock;
@property (readonly, nonatomic) UIViewController *viewController;

+ (id)actionWithType:(long long)a0;

- (void).cxx_destruct;

@end
