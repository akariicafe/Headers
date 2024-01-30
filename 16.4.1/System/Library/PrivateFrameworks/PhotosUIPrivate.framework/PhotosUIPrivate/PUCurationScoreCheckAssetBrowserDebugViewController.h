@class NSString, UIPickerView;

@interface PUCurationScoreCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    double _minimumValue;
    double _maximumValue;
    NSString *_scoreName;
    BOOL _sortAscending;
    BOOL _showsVideos;
    UIPickerView *_scorePickerView;
    UIPickerView *_sortPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_presentTapToRadar;
- (void)_update;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)_editSettings:(id)a0;
- (id)newToolbarItems;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)_doneEditingSettings:(id)a0;
- (void)_fileRadarWithIncorrectAssets:(id)a0;
- (void)_setMaximum:(id)a0;
- (void)_setMinimum:(id)a0;
- (void)_setShowsVideos:(id)a0;
- (BOOL)_writeDiagnosticsToURL:(id)a0 incorrectAssets:(id)a1;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (id)phScoreKeyPathByScoreName;
- (id)plScoreKeyPathByScoreName;
- (id)scoreNames;
- (BOOL)shouldShowToolbar;

@end
