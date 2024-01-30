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
- (void)_update;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)_editSettings:(id)a0;
- (id)_goldAssetUUIDs;
- (id)newToolbarItems;
- (id)sortDescriptorForSelectionName:(id)a0;
- (void)_doneEditingSettings:(id)a0;
- (id)phScoreKeyPathsForSelectionName:(id)a0;
- (id)predicateForSelectionName:(id)a0;
- (id)selectionNames;
- (double)semanticScoreFromBehavioralScore:(double)a0;
- (BOOL)shouldShowToolbar;

@end
