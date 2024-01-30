@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingString:(id)a0;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingCharacterInSet:(id)a0;
+ (id)_terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingString:(id)a0 caseSensitive:(BOOL)a1;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)a0;
+ (id)_terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingCharacterInString:(id)a0;
+ (id)terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingDoubleWithCondition:(id /* block */)a0;

- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)characterSet;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;
- (id)_label;
- (unsigned long long)_minimumLength;

@end
