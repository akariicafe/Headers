@interface UIDOMHTMLOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled;

- (id)initCommon;
- (id)initWithHTMLOptionNode:(id)a0;
- (BOOL)_isSelectable;

@end
