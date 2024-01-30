@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl {
    struct RetainPtr<WKFormRotatingAccessoryPopover> { void *m_ptr; } _popover;
    struct RetainPtr<WKDataListSuggestionsViewController> { void *m_ptr; } _suggestionsViewController;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateWithInformation:(struct DataListSuggestionInformation { unsigned char x0; struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *x0; unsigned int x1; unsigned int x2; } x1; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x2; } *)a0;
- (id)initWithInformation:(struct DataListSuggestionInformation { unsigned char x0; struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *x0; unsigned int x1; unsigned int x2; } x1; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x2; } *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS { void /* function */ **x0; unsigned int x1; struct WeakPtrFactory<WebKit::WebDataListSuggestionsDropdown, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x2; struct WeakPtr<WebKit::WebPageProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; id x4; struct RetainPtr<WKDataListSuggestionsControl> { void *x0; } x5; } *)a0 activationType:(unsigned char)a1;
- (void)didSelectOptionAtIndex:(long long)a0;
- (void)invalidate;

@end
