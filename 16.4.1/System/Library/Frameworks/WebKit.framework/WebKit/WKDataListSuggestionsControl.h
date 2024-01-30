@class WKContentView;

@interface WKDataListSuggestionsControl : NSObject {
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _dropdown;
    struct Vector<WebCore::DataListSuggestion, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct DataListSuggestion *m_buffer; unsigned int m_capacity; unsigned int m_size; } _suggestions;
}

@property (weak, nonatomic) WKContentView *view;
@property (nonatomic) BOOL isShowingSuggestions;

- (id)textSuggestions;
- (id).cxx_construct;
- (long long)suggestionsCount;
- (long long)textAlignment;
- (void)invalidate;
- (void).cxx_destruct;
- (void)didSelectOptionAtIndex:(long long)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(void *)a0 activationType:(unsigned char)a1;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })suggestionAtIndex:(long long)a0;
- (void)updateWithInformation:(void *)a0;

@end
