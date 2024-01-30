@interface AKAuthorizationNameFormatter : NSFormatter

+ (void)_addSymbolModifiersToCharacterSet:(id)a0;
+ (id)validNameCharacterSet;

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)_cleanNameString:(id)a0;
- (BOOL)_isOnlyWhitespace:(id)a0;

@end
