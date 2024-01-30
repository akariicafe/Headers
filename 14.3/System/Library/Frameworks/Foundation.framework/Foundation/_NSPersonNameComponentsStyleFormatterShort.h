@class _NSPersonNameComponentsStyleFormatter, _NSPersonNameComponentsStyleFormatterShortVariantGeneral;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {
    long long _shortNameFormat;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral *_variantFormatter;
    _NSPersonNameComponentsStyleFormatter *_subFormatter;
    BOOL _forceShortNameEnabled;
}

@property long long shortNameFormat;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;
@property (retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property BOOL forceShortNameEnabled;

- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (void)dealloc;
- (id)fallbackStyleFormatter;
- (id)abbreviatedKeys;
- (id)keysOfInterest;
- (id)initWithMasterFormatter:(id)a0;
- (BOOL)isEnabled;
- (id)orderedKeysOfInterest;

@end
