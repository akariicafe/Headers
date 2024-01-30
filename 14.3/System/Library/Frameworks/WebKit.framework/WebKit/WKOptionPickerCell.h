@interface WKOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled;

- (id)init;
- (id)initWithOptionItem:(const struct OptionItem { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; BOOL x1; BOOL x2; BOOL x3; int x4; } *)a0;
- (BOOL)_isSelectable;

@end
