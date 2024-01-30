@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {
    struct RetainPtr<NSObject<WKFormControl>> { void *m_ptr; } _control;
}

@property (readonly, nonatomic) NSString *selectFormPopoverTitle;

- (id)initWithView:(id)a0;
- (BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)a0;
- (void).cxx_destruct;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;
- (id).cxx_construct;

@end
