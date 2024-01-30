@interface _HKCFGDoubleTerminal : _HKCFGTerminal

@property (copy, nonatomic) id /* block */ condition;

- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)characterSet;
- (id)_label;
- (unsigned long long)_minimumLength;
- (void).cxx_destruct;

@end
