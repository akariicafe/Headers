@interface WKOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled;

- (BOOL)_isSelectable;
- (id)init;
- (id)initWithOptionItem:(const void *)a0;

@end
