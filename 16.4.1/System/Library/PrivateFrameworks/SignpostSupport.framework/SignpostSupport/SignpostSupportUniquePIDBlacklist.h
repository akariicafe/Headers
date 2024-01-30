@interface SignpostSupportUniquePIDBlacklist : SignpostSupportUniquePIDFilter

- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotEqual;
- (BOOL)passesUniquePIDNumber:(id)a0;

@end
