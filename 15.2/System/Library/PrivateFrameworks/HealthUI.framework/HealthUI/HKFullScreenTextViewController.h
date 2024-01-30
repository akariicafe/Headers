@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController

@property (readonly) UITextView *textView;
@property (copy, nonatomic) NSString *detailText;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)createTextView;

@end
