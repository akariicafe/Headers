@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) BOOL caseSensitive;

- (id)_label;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;
- (id)characterSet;
- (unsigned long long)_minimumLength;

@end
