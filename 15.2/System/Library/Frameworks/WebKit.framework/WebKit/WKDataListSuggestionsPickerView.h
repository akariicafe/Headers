@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl>

@property (weak, nonatomic) WKDataListSuggestionsControl *control;

- (void).cxx_destruct;
- (id)controlView;
- (void)controlEndEditing;
- (void)controlBeginEditing;

@end
