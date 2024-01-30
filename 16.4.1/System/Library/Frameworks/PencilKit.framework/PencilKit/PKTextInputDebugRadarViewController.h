@class NSString, UISegmentedControl, UIButton, PKTextInputDebugSharpenerLog, NSMutableArray, UICollectionView, NSMutableIndexSet, UIBarButtonItem;
@protocol PKTextInputDebugRadarViewControllerDelegate;

@interface PKTextInputDebugRadarViewController : UIViewController <UICollectionViewDataSource, PKTextInputDebugRadarEntryCellDelegate>

@property (retain, nonatomic) UISegmentedControl *_contextDetailControl;
@property (retain, nonatomic) UIBarButtonItem *_submitButton;
@property (retain, nonatomic) UICollectionView *_entriesCollectionView;
@property (nonatomic, setter=_setKeyboardVerticalOverlap:) double _keyboardVerticalOverlap;
@property (retain, nonatomic) UIButton *_sysdiagnoseButton;
@property (retain, nonatomic) NSMutableArray *_intendedTexts;
@property (retain, nonatomic) NSMutableIndexSet *_includedEntryIndexes;
@property (nonatomic) BOOL _includeSysdiagnose;
@property (readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog;
@property (weak, nonatomic) id<PKTextInputDebugRadarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)_handleCancelButton:(id)a0;
- (void)entryCellIntendedTextDidChange:(id)a0;
- (id)_accumulatedLogEntryTextsForRadar;
- (id)_buildString;
- (void)_configureCell:(id)a0 atIndexPath:(id)a1;
- (id)_deviceString;
- (id)_generateLaunchURLWithLogFilename:(id)a0;
- (void)_handleDetailControlChanged:(id)a0;
- (void)_handleKeyboardWillHide:(id)a0;
- (void)_handleKeyboardWillShow:(id)a0;
- (void)_handleSubmitRadarButton:(id)a0;
- (void)_launchTTRAndDismiss;
- (void)_loadIntendedTexts;
- (id)_logEntryTextForRadarTitle;
- (id)_loggedMainLocaleDescription;
- (long long)_selectedContentLevel;
- (void)_toggleSysdiagnoseButton;
- (void)_updateScrollView;
- (void)_updateSubmitButton;
- (void)_updateSysdiagnoseButton;
- (void)entryCellIncludedEntryDidChange:(id)a0;
- (id)initWithSharpenerLog:(id)a0;

@end
