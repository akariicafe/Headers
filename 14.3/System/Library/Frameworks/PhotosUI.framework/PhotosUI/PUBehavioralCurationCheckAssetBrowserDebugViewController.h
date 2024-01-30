@class NSString, NSPredicate, UIPickerView;

@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSPredicate *_predicate;
    NSString *_selectionName;
    BOOL _sortAscending;
    UIPickerView *_scorePickerView;
    UIPickerView *_sortPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldShowToolbar;
- (id)newToolbarItems;
- (void)_editSettings:(id)a0;
- (void)_doneEditingSettings:(id)a0;
- (id)selectionNames;
- (id)_goldAssetUUIDs;
- (id)predicateForSelectionName:(id)a0;
- (id)sortDescriptorForSelectionName:(id)a0;
- (id)phScoreKeyPathsForSelectionName:(id)a0;
- (double)semanticScoreFromBehavioralScore:(double)a0;
- (void)_update;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)viewDidLoad;

@end
