@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject

@property (readonly, copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayValue;
@property (nonatomic) BOOL usedMaximumSuggestion;

+ (id)suggestionWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
+ (id)suggestionWithValue:(id)a0 currencyCode:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
- (unsigned long long)hash;
- (id)initWithValue:(id)a0 currencyCode:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
