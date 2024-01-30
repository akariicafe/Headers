@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {
    SEL _countryCodeSelector;
    NSString *_previousValue;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)countryCode;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;
- (void)dealloc;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)a0 inputIndex:(unsigned int)a1;

@end
