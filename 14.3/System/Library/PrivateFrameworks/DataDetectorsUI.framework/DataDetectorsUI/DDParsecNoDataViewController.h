@class NSString, NSURL, UIView, UILabel;

@interface DDParsecNoDataViewController : UIViewController {
    UIView *_container;
    UILabel *_errorLabel;
}

@property (retain, nonatomic) NSString *reason;
@property (retain) NSString *searchWebQuery;
@property (retain) NSURL *altURL;
@property (nonatomic) BOOL inPlatter;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)searchWeb:(id)a0;
- (id)manageDictionariesURL;
- (void)manageDictionaries:(id)a0;

@end
