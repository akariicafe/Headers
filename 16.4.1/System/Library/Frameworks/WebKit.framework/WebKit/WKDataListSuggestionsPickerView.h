@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl>

@property (weak, nonatomic) WKDataListSuggestionsControl *control;

- (id)controlView;
- (void).cxx_destruct;
- (void)controlBeginEditing;
- (void)controlEndEditing;

@end
