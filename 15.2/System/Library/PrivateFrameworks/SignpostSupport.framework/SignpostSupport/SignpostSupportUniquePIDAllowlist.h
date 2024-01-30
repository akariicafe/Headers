@interface SignpostSupportUniquePIDAllowlist : SignpostSupportUniquePIDFilter

- (unsigned long long)_compoundPredicateType;
- (BOOL)passesUniquePIDNumber:(id)a0;
- (BOOL)_wantsNotEqual;

@end
