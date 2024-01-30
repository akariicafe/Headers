@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (unsigned long long)_minimumLength;
- (id)_label;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;

@end
