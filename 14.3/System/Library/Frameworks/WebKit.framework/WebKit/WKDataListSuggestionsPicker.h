@class NSString;

@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl <UIPickerViewDataSource, UIPickerViewDelegate> {
    struct RetainPtr<WKDataListSuggestionsPickerView> { void *m_ptr; } _pickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)updateWithInformation:(struct DataListSuggestionInformation { unsigned char x0; struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *x0; unsigned int x1; unsigned int x2; } x1; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x2; } *)a0;
- (id)initWithInformation:(struct DataListSuggestionInformation { unsigned char x0; struct Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct DataListSuggestion *x0; unsigned int x1; unsigned int x2; } x1; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x2; } *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS { void /* function */ **x0; unsigned int x1; struct WeakPtrFactory<WebKit::WebDataListSuggestionsDropdown, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x2; struct WeakPtr<WebKit::WebPageProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; id x4; struct RetainPtr<WKDataListSuggestionsControl> { void *x0; } x5; } *)a0 activationType:(unsigned char)a1;
- (void)invalidate;

@end
