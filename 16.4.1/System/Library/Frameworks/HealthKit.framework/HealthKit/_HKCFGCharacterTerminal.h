@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)_label;
- (unsigned long long)_minimumLength;
- (void).cxx_destruct;

@end
