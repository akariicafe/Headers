@class NSString, NSDictionary, UIPickerView;

@interface PUCurationClassificationSignalAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSString *_signalName;
    double _operatingPoint;
    double _highPrecisionOperatingPoint;
    double _highRecallOperatingPoint;
    NSDictionary *_signalConfidenceByAssetUUID;
    double _minimumValue;
    double _maximumValue;
    BOOL _sortsAscending;
    BOOL _showsVideos;
    UIPickerView *_sortPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_presentTapToRadar;
- (void).cxx_destruct;
- (BOOL)shouldShowToolbar;
- (id)newToolbarItems;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (void)_editSettings:(id)a0;
- (void)_setMinimum:(id)a0;
- (void)_setMaximum:(id)a0;
- (void)_setShowsVideos:(id)a0;
- (void)_doneEditingSettings:(id)a0;
- (void)setSignalConfidenceByAssetUUID:(id)a0 withSignalName:(id)a1 operatingPoint:(double)a2 highPrecisionOperatingPoint:(double)a3 highRecallOperatingPoint:(double)a4;
- (void)_fileRadarWithIncorrectAssets:(id)a0;
- (BOOL)_writeDiagnosticsToURL:(id)a0 incorrectAssets:(id)a1;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)_update;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)viewDidLoad;

@end
