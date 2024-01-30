@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl {
    struct RetainPtr<WKFormRotatingAccessoryPopover> { void *m_ptr; } _popover;
    struct RetainPtr<WKDataListSuggestionsViewController> { void *m_ptr; } _suggestionsViewController;
}

- (void).cxx_destruct;
- (void)updateWithInformation:(void *)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(void *)a0 activationType:(unsigned char)a1;
- (void)didSelectOptionAtIndex:(long long)a0;
- (void)invalidate;
- (id).cxx_construct;

@end
