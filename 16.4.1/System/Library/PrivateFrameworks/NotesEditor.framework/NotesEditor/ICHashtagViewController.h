@class UITextField;
@protocol ICHashtagViewControllerDelegate;

@interface ICHashtagViewController : UIViewController

@property (nonatomic) UITextField *textField;
@property (weak, nonatomic) id<ICHashtagViewControllerDelegate> delegate;

- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)nibBundle;
- (void)createFutureHashtag:(id)a0;
- (void)createHashtag:(id)a0;
- (void)createUnknownInlineAttachment:(id)a0;

@end
