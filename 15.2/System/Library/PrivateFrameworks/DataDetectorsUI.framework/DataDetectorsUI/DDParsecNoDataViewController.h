@class NSString, NSURL, UIView, UILabel, _UIContentUnavailableView;

@interface DDParsecNoDataViewController : UIViewController {
    UIView *_container;
    UILabel *_errorLabel;
    _UIContentUnavailableView *_emptyNoContentView;
}

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *searchWebQuery;
@property (retain, nonatomic) NSURL *altURL;
@property (nonatomic) BOOL lookup;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)updateStyle;
- (void)searchWeb:(id)a0;
- (id)manageDictionariesURL;
- (void)manageDictionaries:(id)a0;

@end
