@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)a0;
+ (id)terminalMatchingCharacterInSet:(id)a0;
+ (id)_terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingString:(id)a0;
+ (id)terminalMatchingCharacterInString:(id)a0;
+ (id)_terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingString:(id)a0 caseSensitive:(BOOL)a1;
+ (id)terminalMatchingAnyDouble;

- (unsigned long long)_minimumLength;
- (id)_label;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;

@end
