@class NSDictionary, NSString, UITextField, PXRoundProgressView, _PXScoreLabGraphView, UIPickerView, NSArray;

@interface PXScoreLabViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, _PXScoreLabGraphViewDelegate> {
    UIPickerView *_xScorePickerView;
    UITextField *_xScoreSceneNameField;
    UIPickerView *_graphTypePickerView;
    UIPickerView *_yScorePickerView;
    UITextField *_yScoreSceneNameField;
    UIPickerView *_assetFilterPickerView;
    _PXScoreLabGraphView *_graphView;
    PXRoundProgressView *_progressView;
    NSArray *_scoreNames;
    NSDictionary *_keyPathByScoreName;
    NSDictionary *_timestampKeyPathByPrefix;
    NSArray *_assetFilterNames;
    NSDictionary *_assetPredicateByFilterName;
    NSDictionary *_taxonomy;
    NSDictionary *_sceneIdentifierBySceneName;
    BOOL _redrawIsDisabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)scoreLabGraphView:(id)a0 reloadProgressed:(double)a1;
- (void)scoreLabGraphViewDidFinishReloading:(id)a0;
- (void)redrawGraph;
- (id /* block */)valueGetterForScoreKeyPath:(id)a0;
- (id /* block */)valueGetterForSceneIdentifier:(unsigned int)a0;
- (unsigned int)identifierForSceneName:(id)a0;
- (void)sceneNameChanged:(id)a0;

@end
