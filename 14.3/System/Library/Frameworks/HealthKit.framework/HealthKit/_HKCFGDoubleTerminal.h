@interface _HKCFGDoubleTerminal : _HKCFGTerminal

@property (copy, nonatomic) id /* block */ condition;

- (id)_label;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;
- (id)characterSet;
- (unsigned long long)_minimumLength;

@end
