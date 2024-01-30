@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {
    struct RetainPtr<NSObject<WKFormControl>> { void *m_ptr; } _control;
}

@property (readonly, nonatomic) NSString *selectFormPopoverTitle;

- (BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)a0;
- (id).cxx_construct;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;

@end
