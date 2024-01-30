@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController

@property (readonly) UITextView *textView;
@property (copy, nonatomic) NSString *detailText;

- (void)viewDidLoad;
- (id)description;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)createTextView;

@end
