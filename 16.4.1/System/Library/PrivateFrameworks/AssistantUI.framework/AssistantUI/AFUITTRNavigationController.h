@class NSArray;

@interface AFUITTRNavigationController : UINavigationController {
    NSArray *_reports;
    id /* block */ _completion;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithReports:(id)a0 completion:(id /* block */)a1;
- (void)presentUtteranceSelectionController;

@end
