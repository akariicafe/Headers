@interface _TtCV9PassKitUI23EnterCurrencyAmountView11Coordinator : NSObject <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {
    void /* unknown type, empty encoding */ _nextDisabled;
    void /* unknown type, empty encoding */ _amount;
    void /* unknown type, empty encoding */ _amountGuide;
    void /* unknown type, empty encoding */ _amountGuideColor;
    void /* unknown type, empty encoding */ currencyCode;
    void /* unknown type, empty encoding */ currentBalance;
    void /* unknown type, empty encoding */ availableBalance;
    void /* unknown type, empty encoding */ minLoadAmount;
    void /* unknown type, empty encoding */ maxLoadAmount;
    void /* unknown type, empty encoding */ fundsActionType;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ keypadSuggestionSelected;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;

@end
