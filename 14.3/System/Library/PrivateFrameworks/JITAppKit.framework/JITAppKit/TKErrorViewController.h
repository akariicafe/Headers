@class NSString, UILabel;

@interface TKErrorViewController : UIViewController {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *message;

+ (id)viewControllerForMessage:(id)a0;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;

@end
