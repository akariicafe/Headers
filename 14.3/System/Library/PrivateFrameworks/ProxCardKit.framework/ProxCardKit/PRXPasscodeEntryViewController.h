@class PRXPasscodeEntryView;

@interface PRXPasscodeEntryViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXPasscodeEntryView *passcodeEntryView;
@property (nonatomic) long long numberOfDigits;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (copy, nonatomic) id /* block */ textEntryCompletionHandler;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_textDidChange:(id)a0;
- (void)textDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)_updatePasscodeEntryView;
- (void)didCompleteTextEntry:(id)a0;

@end
