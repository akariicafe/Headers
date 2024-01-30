@class NSString, CNGeminiPickerController;

@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell <CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate>

@property (retain, nonatomic) CNGeminiPickerController *geminiPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldIndentWhileEditing;
+ (BOOL)wantsChevron;
+ (BOOL)wantsHorizontalLayout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)geminiDataSourceDidUpdate:(id)a0;
- (id)geminiItem;
- (id)variableConstraints;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;

@end
