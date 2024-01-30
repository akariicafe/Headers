@interface WBSCreditCardFormatter : NSFormatter

@property (nonatomic) BOOL showLastFourDigits;
@property (nonatomic) BOOL showCreditCardNumber;
@property (nonatomic) BOOL allowsUnknownCardTypes;
@property (nonatomic) BOOL isVirtualCard;

+ (id)_formattedStringForNormalizedNumber:(id)a0 showCreditCardNumber:(BOOL)a1 showLastFourDigits:(BOOL)a2 isVirtualCard:(BOOL)a3;
+ (id)formattedStringForNormalizedNumber:(id)a0 showCreditCardNumber:(BOOL)a1;

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_normalizedSelectionRangeForFormattedCreditCardNumber:(id)a0 withOriginalSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionRangeInFormattedCreditCardNumber:(id)a0 forNormalizedSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inNormalizedCreditCardNumber:(id)a2;

@end
