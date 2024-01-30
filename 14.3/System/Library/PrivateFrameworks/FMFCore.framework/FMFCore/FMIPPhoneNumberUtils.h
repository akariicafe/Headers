@interface FMIPPhoneNumberUtils : NSObject

+ (id)formatPhoneNumber:(id)a0;
+ (id)countryCode;
+ (id)normalizedPhoneNumber:(id)a0;
+ (BOOL)isEmail:(id)a0;
+ (id)unformatPhoneNumber:(id)a0;
+ (BOOL)isPhoneNumberValid:(id)a0;
+ (BOOL)isPossiblyTruncatedPhoneNumberValid:(id)a0;
+ (id)formatFullyQualifiedPhoneNumber:(id)a0;
+ (BOOL)updateTextView:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
+ (BOOL)updateTextField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
+ (id)completeNumberForPhoneNumber:(id)a0 formatted:(BOOL)a1;
+ (id)formattedHandle:(id)a0;
+ (BOOL)handle:(id)a0 matchesHandle:(id)a1;

@end
