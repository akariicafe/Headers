@class MTVisualStylingProvider, NSArray, NSString, MPAVClippingTableView, UIView, MPRequestResponseController;
@protocol MediaControlsLanguageOptionsViewControllerDelegate;

@interface MediaControlsLanguageOptionsViewController : UIViewController <MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate>

@property (retain, nonatomic) MPRequestResponseController *requestResponseController;
@property (retain, nonatomic) UIView *materialView;
@property (retain, nonatomic) MPAVClippingTableView *tableView;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) NSArray *languageOptionGroups;
@property (weak, nonatomic) id<MediaControlsLanguageOptionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (id)initWithRouteUID:(id)a0;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthTopSeparatorForSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
