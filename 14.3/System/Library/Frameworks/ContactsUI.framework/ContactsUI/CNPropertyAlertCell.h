@class CNPropertyGroupAlertItem, NSString;

@interface CNPropertyAlertCell : CNPropertySimpleCell <CNPickerControllerDelegate>

@property (readonly, nonatomic) CNPropertyGroupAlertItem *alertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldIndentWhileEditing;
+ (BOOL)wantsChevron;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)a0;
- (id)alertGroup;
- (void)performDefaultAction;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (BOOL)allowsCellSelection;

@end
