@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) BOOL caseSensitive;

- (unsigned long long)_minimumLength;
- (id)_label;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;

@end
