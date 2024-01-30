@class NSString, UITextField;

@interface HUEditableTextCell : HUTitleValueCell <HUEditableTextCellProtocol, HUDisableableCellProtocol>

@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

@end
