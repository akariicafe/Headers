@class WKContentView;

@interface WKDataListSuggestionsControl : NSObject {
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } _dropdown;
    struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *m_buffer; unsigned int m_capacity; unsigned int m_size; } _suggestions;
}

@property (weak, nonatomic) WKContentView *view;

- (void).cxx_destruct;
- (long long)textAlignment;
- (id).cxx_construct;
- (void)updateWithInformation:(struct DataListSuggestionInformation { unsigned char x0; struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *x0; unsigned int x1; unsigned int x2; } x1; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x2; } *)a0;
- (id)initWithInformation:(struct DataListSuggestionInformation { unsigned char x0; struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *x0; unsigned int x1; unsigned int x2; } x1; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x2; } *)a0 inView:(id)a1;
- (id)textSuggestions;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS { void /* function */ **x0; unsigned int x1; struct WeakPtrFactory<WebKit::WebDataListSuggestionsDropdown, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x2; struct WeakPtr<WebKit::WebPageProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; id x4; struct RetainPtr<WKDataListSuggestionsControl> { void *x0; } x5; } *)a0 activationType:(unsigned char)a1;
- (void)didSelectOptionAtIndex:(long long)a0;
- (long long)suggestionsCount;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; })suggestionAtIndex:(long long)a0;
- (void)invalidate;

@end
