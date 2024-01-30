@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSString *string;
@property (nonatomic) BOOL caseSensitive;

- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)characterSet;
- (id)_label;
- (unsigned long long)_minimumLength;
- (void).cxx_destruct;

@end
