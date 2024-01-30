@class NSString, CNGeminiPickerController;

@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell <CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate>

@property (retain, nonatomic) CNGeminiPickerController *geminiPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsHorizontalLayout;
+ (BOOL)shouldIndentWhileEditing;
+ (BOOL)wantsChevron;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (void)geminiDataSourceDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)geminiItem;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (id)variableConstraints;
- (void)performDefaultAction;

@end
