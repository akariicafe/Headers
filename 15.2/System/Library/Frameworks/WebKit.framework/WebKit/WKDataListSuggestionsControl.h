@class WKContentView;

@interface WKDataListSuggestionsControl : NSObject {
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _dropdown;
    struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *m_buffer; unsigned int m_capacity; unsigned int m_size; } _suggestions;
}

@property (weak, nonatomic) WKContentView *view;
@property (nonatomic) BOOL isShowingSuggestions;

- (long long)suggestionsCount;
- (void).cxx_destruct;
- (void)updateWithInformation:(void *)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(void *)a0 activationType:(unsigned char)a1;
- (void)didSelectOptionAtIndex:(long long)a0;
- (id)textSuggestions;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })suggestionAtIndex:(long long)a0;
- (void)invalidate;
- (id).cxx_construct;
- (long long)textAlignment;

@end
