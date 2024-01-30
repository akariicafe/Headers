@interface UIDOMHTMLOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled;

- (BOOL)_isSelectable;
- (id)initCommon;
- (id)initWithHTMLOptionNode:(id)a0;

@end
