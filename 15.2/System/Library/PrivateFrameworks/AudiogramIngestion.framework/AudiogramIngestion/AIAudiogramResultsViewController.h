@class NSString, NSArray, NSMutableDictionary, HKAudiogramSample, UITableView, AIAudiogramKeyboardToolbar, NSLayoutConstraint, NSIndexPath;
@protocol AIAudiogramConfirmResultsViewControllerDelegate;

@interface AIAudiogramResultsViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, _UIScrollViewScrollObserver, AIAudiogramResultDateCellDelegate, AIAudiogramResultTimeCellDelegate, AIAudiogramResultEarCellDelegate>

@property (weak, nonatomic) id<AIAudiogramConfirmResultsViewControllerDelegate> audiogramConfirmationDelegate;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) NSIndexPath *activeIndexPath;
@property (retain, nonatomic) HKAudiogramSample *audiogram;
@property (retain, nonatomic) NSArray *frequencies;
@property (retain, nonatomic) NSMutableDictionary *tableViewCells;
@property (retain, nonatomic) AIAudiogramKeyboardToolbar *keyboardToolbar;
@property (nonatomic) BOOL analyticsDidMakeAdjustments;
@property (nonatomic) BOOL analyticsDidCompleteIngestion;
@property (nonatomic) unsigned long long analyticsImportSource;
@property (nonatomic) unsigned long long analyticsClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_observeScrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_confirmTapped:(id)a0;
- (BOOL)_scrollToIndexPathIfNecessary:(id)a0 animated:(BOOL)a1;
- (id)initWithDelegate:(id)a0 audiogram:(id)a1;
- (void)keyboardDoneTapped;
- (void)keyboardNegationTapped;
- (void)keyboardPreviousTapped;
- (void)keyboardNextTapped;
- (void)_updateTableViewHeight;
- (void)_setCellActive:(BOOL)a0 indexPath:(id)a1 scroll:(BOOL)a2;
- (void)earCellDidUpdateHearingLevel:(id)a0 forFrequency:(id)a1 forEar:(long long)a2;
- (void)_reloadAudiogramWithSensitivityPoints:(id)a0 date:(id)a1;
- (void)dateCellDidPickDate:(id)a0;
- (void)timeCellDidPickDate:(id)a0;
- (void)earCellDidBeginEditingForFrequency:(id)a0 forEar:(long long)a1;
- (void)earCellDidEndEditingForFrequency:(id)a0 forEar:(long long)a1;

@end
