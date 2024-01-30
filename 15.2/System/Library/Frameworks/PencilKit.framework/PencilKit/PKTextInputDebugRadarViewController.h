@class PKTextInputDebugSharpenerLog, NSString, UICollectionView, NSMutableIndexSet, UISegmentedControl, NSMutableArray, UIBarButtonItem;
@protocol PKTextInputDebugRadarViewControllerDelegate;

@interface PKTextInputDebugRadarViewController : UIViewController <UICollectionViewDataSource, PKTextInputDebugRadarEntryCellDelegate>

@property (retain, nonatomic) UISegmentedControl *_contextDetailControl;
@property (retain, nonatomic) UIBarButtonItem *_submitButton;
@property (retain, nonatomic) UICollectionView *_entriesCollectionView;
@property (nonatomic, setter=_setKeyboardVerticalOverlap:) double _keyboardVerticalOverlap;
@property (retain, nonatomic) NSMutableArray *_intendedTexts;
@property (retain, nonatomic) NSMutableIndexSet *_includedEntryIndexes;
@property (readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog;
@property (weak, nonatomic) id<PKTextInputDebugRadarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)_deviceString;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)_handleCancelButton:(id)a0;
- (void).cxx_destruct;
- (void)_setupViews;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithSharpenerLog:(id)a0;
- (void)entryCellIntendedTextDidChange:(id)a0;
- (void)entryCellIncludedEntryDidChange:(id)a0;
- (void)_loadIntendedTexts;
- (void)_handleKeyboardWillShow:(id)a0;
- (void)_handleKeyboardWillHide:(id)a0;
- (void)_handleSubmitRadarButton:(id)a0;
- (void)_handleDetailControlChanged:(id)a0;
- (void)_updateSubmitButton;
- (void)_updateScrollView;
- (void)_configureCell:(id)a0 atIndexPath:(id)a1;
- (long long)_selectedContentLevel;
- (void)_launchTTRAndDismiss;
- (id)_buildString;
- (id)_accumulatedLogEntryTextsForRadar;
- (id)_loggedMainLocaleDescription;
- (id)_logEntryTextForRadarTitle;
- (id)_generateLaunchURLWithLogFilename:(id)a0;

@end
